#ifndef _GAME_ENGINE_H_
#define _GAME_ENGINE_H_

#include <SFML/Graphics.hpp>

#include "game_object.h"
#include "character.h"

class game_engine{
  private:
    sf::RenderWindow window;
    sf::Clock update_clock;
    std::vector<game_object> game_objects;

    void event_handler();
    void update();
    void draw();
  public:
    game_engine(sf::VideoMode video_mode, std::string title);
    void main_loop();
};

#endif