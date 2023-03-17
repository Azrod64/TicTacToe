#ifndef CROSS_HPP
#define CROSS_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <cmath>

class Cross 
{
public:
    Cross(int taille);
    void draw(int x, int y);
    void display(sf::RenderWindow& window);

private:
    int m_taille;
    sf::RectangleShape m_nord, m_sud, m_est, m_ouest;
};

#endif