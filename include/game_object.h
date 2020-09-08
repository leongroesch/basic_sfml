#ifndef __GAME_OBJECT_H_
#define __GAME_OBJECT_H_

#include <SFML/Graphics.hpp>

class game_object : public sf::Drawable{
  private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const{
                        target.draw(sprite, states);
                      };
  protected:
    game_object(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f acceleration) 
                  : position(position), velocity(velocity), acceleration(acceleration) 
                  {};

    sf::Vector2f position;
    sf::Vector2f velocity;
    sf::Vector2f acceleration;
    sf::Sprite sprite;

  public:
    virtual void update(sf::Time elapsed_time)
    {
      velocity.x = velocity.x + acceleration.x * elapsed_time.asSeconds();
      velocity.y = velocity.y + acceleration.y * elapsed_time.asSeconds();
      position.x = position.x + velocity.x * elapsed_time.asSeconds();
      position.y = position.y + velocity.y * elapsed_time.asSeconds();
      sprite.setPosition(position);
    };
    void set_texture(sf::Texture &texture)
    {
      sprite.setTexture(texture);
    };
};

#endif