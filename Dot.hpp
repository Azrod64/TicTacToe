#ifndef DOT_HPP
#define DOT_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>

class Dot 
{
public:
    Dot();
    Dot(int diametre);
    void draw(int x, int y);
    void display(sf::RenderWindow& window);

private:
    int m_diametre;
    sf::CircleShape m_cercle;
};

#endif