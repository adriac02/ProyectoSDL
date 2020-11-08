#pragma once
#include "Texture.h"

class Pacman {
private:
    Texture* sprite = nullptr;
    unsigned int x;
    unsigned int y;
public:
    Pacman(Texture* body); //meter luego los ints para pos ini
    void MoverseLat(SDL_Event dir);
    void MoverseVer(SDL_Event dir);
};