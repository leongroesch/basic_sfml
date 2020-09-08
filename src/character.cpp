#include "character.h"

#include <iostream>

sf::Texture character::texture;

character::character(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration) 
                      : game_object(position, velocity, acceleration)
{
   if (!texture.loadFromFile("../textures/standRight.png"))
   {
     std::cout << "Was not able to load image\n"; 
   }
   else
   {
     set_texture(texture);
   }
}

void character::update(sf::Time elapsed_time)
{
  game_object::update(elapsed_time);
}