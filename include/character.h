#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <SFML/Graphics.hpp>
#include "game_object.h"

class character : public game_object{
  private:
    static sf::Texture texture;
  public:
    character(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration);
    void update(sf::Time elapsed_time);

};
#endif