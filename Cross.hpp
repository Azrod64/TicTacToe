#ifndef CROSS_HPP
#define CROSS_HPP

#include <iostream>
#include <SFML/Graphics.hpp>

class Cross 
{
public:
    Cross();
    Cross(int taille);
    void draw(int x, int y);
    void display(sf::RenderWindow& window);

private:
    int m_taille;
    sf::RectangleShape m_rect1, m_rect2;
};

#endif