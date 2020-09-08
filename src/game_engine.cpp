
#include "game_engine.h"


game_engine::game_engine(sf::VideoMode video_mode, std::string title) 
                : window(video_mode, title)
{
  character obj1(sf::Vector2f(100, 100), sf::Vector2f(15,15), sf::Vector2f(5, 5));
  character obj2(sf::Vector2f(100, 100), sf::Vector2f(15,15), sf::Vector2f(0, 0));

  game_objects.push_back(obj1);
  game_objects.push_back(obj2);
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
  for(auto& x : game_objects)
  {
    x.update(elapsed_time);
  }
  update_clock.restart();
}

void game_engine::draw()
{
  window.clear();
  for(auto& x : game_objects)
  {
    window.draw(x);
  }
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