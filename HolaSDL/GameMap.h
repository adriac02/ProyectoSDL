#pragma once 
#include <string>
class GameMap {
private:
	enum MapCell{Empty,Wall,Food,Vitamins};
	unsigned int MAP_WIDTH;
	unsigned int MAP_HEIGHT;
	MapCell* mapa;
public:
	GameMap(std::string filename);
};