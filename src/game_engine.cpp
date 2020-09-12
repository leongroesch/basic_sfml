
#include "game_engine.h"

#include <iostream>

game_engine::game_engine(sf::VideoMode video_mode, std::string title) 
                : window(video_mode, title)
{

}

void game_engine::event_handler()
{
  sf::Event event;
  while(window.pollEvent(event)){
      switch(event.type){
          case sf::Event::Closed:
              window.close();
              break;
          default:
              break;
      }
  }
}

void game_engine::update()
{
  auto elapsed_time = update_clock.getElapsedTime();
  
}

void game_engine::draw()
{
  window.clear();
  calc_fps();
  
  window.display();
}

void game_engine::main_loop()
{
  while(window.isOpen()){
    event_handler();
    update();
    draw();
  }
}

void game_engine::calc_fps()
{
  if(fps_clock.getElapsedTime().asSeconds() >= 1.0)
  {
    std::cout << "FPS: " << fps_count << std::endl;
    fps_count = 0;
    fps_clock.restart();
  }
  fps_count++;
}