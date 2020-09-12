#ifndef _GAME_ENGINE_H_
#define _GAME_ENGINE_H_

#include <SFML/Graphics.hpp>

class game_engine{
  private:
    sf::RenderWindow window;
    sf::Clock update_clock;
    
    sf::Clock fps_clock;
    int fps_count;

    void event_handler();
    void update();
    void draw();

    void calc_fps();
  public:
    game_engine(sf::VideoMode video_mode, std::string title);
    void main_loop();
};

#endif