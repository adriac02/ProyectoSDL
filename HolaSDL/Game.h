#pragma once
#include "Texture.h"
const unsigned int WIN_WIDTH = 800;
const unsigned int WIN_HEIGHT = 600;
const unsigned int NUM_TEXTURES = 0;

class Game {
private:
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	bool exit = false;
	Texture* textures[NUM_TEXTURES];

public:
	Game();
	~Game();
	void run();
	void render() const;
	void handleEvents();
	void update();
};