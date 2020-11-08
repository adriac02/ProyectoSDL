#pragma once
#include "Texture.h"

class Pacman {
private:
    unsigned int w = 0;
    unsigned int h = 0;
    unsigned int x, y = 0;
    int dirX = 0; int dirY = 0;
    Texture* sprite = nullptr;
public:
    Pacman();
    Pacman(unsigned int w, unsigned h, unsigned int x, unsigned y, Texture* t): w(w), h(h), x(x), y(y), sprite(t){}
    ~Pacman(){}
    void render() const;
    void update();
    void handleEvents(SDL_Event& event);
};