#include "GameMap.h"
#include <fstream>
GameMap::GameMap(std::string filename) {
	std::ifstream entrada;
	entrada.open(filename);
	entrada >> MAP_HEIGHT;
	entrada >> MAP_WIDTH;
	mapa = new MapCell[MAP_WIDTH, MAP_HEIGHT];
	for (int i = 0; i < MAP_HEIGHT; i++) {
		for (int j = 0; j < MAP_WIDTH; j++) {
			int aux;
			entrada >> aux;
			switch (aux)
			{
			case 0:
				mapa[j, i] = Empty;
				break;
			case 1:
				mapa[j, i] = Wall;
				break;
			case 2:
				mapa[j, i] = Food;
				break;
			case 3:
				mapa[j, i] = Vitamins;
				break;
			}
		}
	}
}