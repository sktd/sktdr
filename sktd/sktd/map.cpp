#include "map.h"

map::map::map(void)
{
	/*int x=100;
	for(int i=0;i<width*height;i++){
		tile *wsk=new tile(x,200, "tor1.bmp",1);
		track[i]=*wsk;
		x+=30;
	}

	int x2=120;
	for(int i=0;i<build;i++){
		tile *wsk=new tile(x2,150, "tor2.bmp",2);
		buildable[i]=*wsk;
		x2+=40;
	}*/
	
	load_level("lvl1.txt");
	
	chosen=buildable;
}


map::map::~map(void)
{
}

void map::map::begin_wave(double px, double py, std::string s, double vel, double hlth, int wrth, int hm)
{
	while(hm--){
		itm=mobs_list.begin();
		mob *wsk=new mob(px, py, s, vel, hlth, wrth);
		mobs_list.insert(itm, *wsk);
	}
	int x=180;
	itm=mobs_list.begin();
	while(itm!=mobs_list.end()){
			(*itm).move(x,0);
			++itm;
			x+=TEX_SIZE;
	}
}

void map::map::end_wave()
{

}

bool map::map::load_level(const char *filename){
	FILE *f = fopen(filename, "r");
	if(!f){ 
		fprintf(stderr, "error: could not open map file \"%s\"\n", filename);
		return false;
	}

	int x=MARGIN;
	int y=100;
	for(int j = 0; j < width; j++) {
		char line[64];
		fgets(line, sizeof(line), f);
		if(feof(f)){ 
			fprintf(stderr, "error: unexpected end of file \"%s\"\n", filename);
			fclose(f);
			return false;
		}
	tile *wsk;

    for(int i = 0; i < height; i++) {
      switch(line[i]) {
        case '#': 	
			wsk=new tile(x,y,"road.png",MAP_ROAD);
					 track[j][i] = *wsk; 
					 x+=TEX_SIZE;
					 break;
        case 'X': 	
			wsk=new tile(x,y,"grass.png",MAP_GRASS);
					 track[j][i] = *wsk; 
					 x+=TEX_SIZE;
					 break;
        case 'B': 	
			wsk=new tile(x,y,"build.png",MAP_BUILDABLE);
					 track[j][i] = *wsk; 
					 x+=TEX_SIZE;
					 break;
		case 'O': 	
			wsk=new tile(x,y,"gate.png",MAP_GATE);
					 track[j][i] = *wsk; 
					 x+=TEX_SIZE;
					 break;
		default:
          fprintf(stderr, "error: unknown map character \"%c\" in \"%s\"\n",
              line[i], filename);
          fclose(f);
          return false;
		  break;
      }
    }
	x=MARGIN;
	y+=TEX_SIZE;

  }
 
  printf("info: loaded map \"%s\"\n", filename);

  fclose(f);
  return true;
}

void map::map::build_tower(std::string s, double spd, int cst, engine::player_console &console){
	if((*chosen).get_type()==2){
		tower *wsk=new tower((*chosen).get_pos_x()-5, (*chosen).get_pos_y()-5, s, spd, cst);
		(*chosen).set_type(0);
		move_chosen_r();
		towers_list.push_back(*wsk);
		console.subtract_resources(cst);
	}
}

void map::map::display(sf::RenderWindow &win, engine::player_console &console){

	for(int i=0;i<height;i++)
		for(int j=0;j<width;j++)
			track[i][j].draw(win);
	
	for(int i=0;i<build;i++){
		if(buildable[i].get_type()!=0)
			buildable[i].draw(win);
	}

	itm=mobs_list.begin();
	if(itm!=mobs_list.end()&&(*itm).get_pos_x()>get_end_x()){
		int tmp=mobs_list.size();
		while(tmp--)
			console.subtract_life();
		mobs_list.clear();
		itm=mobs_list.begin();
	}
	while(itm!=mobs_list.end()){
		(*itm).move();
		if((*itm).get_pos_x()>get_start_x()&&(*itm).get_pos_x()<get_end_x())
			(*itm).draw(win);
		++itm;
	}

	if((*chosen).get_type()!=0)
		(*chosen).draw2(win);

	itt=towers_list.begin();
	while(itt!=towers_list.end()){
		(*itt).draw(win);
		(*itt).fire();
		++itt;
	}
}

double map::map::get_start_x()
{
	return track[0][0].get_pos_x();
}

double map::map::get_start_y()
{
	return track[0][0].get_pos_y();
}

double map::map::get_end_x()
{
	return track[width-1][0].get_pos_x();
}

double map::map::get_end_y()
{
	return track[0][height-1].get_pos_y();

}

void map::map::move_chosen_l()
{
	for(int i=0;i<build;i++){
		if(chosen!=&buildable[0])
			chosen--;
		else
			chosen=&buildable[build-1];
		if((*chosen).get_type()==2)
			break;
	}
}

void map::map::move_chosen_r()
{

	for(int i=0;i<build;i++){
		if(chosen!=&buildable[build-1])
			chosen++;
		else
			chosen=&buildable[0];
		if((*chosen).get_type()==2)
			break;
	}
}