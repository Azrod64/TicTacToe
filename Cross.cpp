#include "Cross.hpp"

using namespace std;

Cross::Cross(int taille) : m_taille(taille), m_nord(sf::Vector2f(m_taille,1)), m_sud(sf::Vector2f(m_taille, 1)), m_est(sf::Vector2f(m_taille, 1)), m_ouest(sf::Vector2f(m_taille, 1))
{
    // ne rien mettre içi
}

void Cross::draw(int x, int y)
{
    // positionnement de la croix
    m_nord.setPosition(sf::Vector2f(x,y));
    m_nord.setRotation(45);
 
    m_sud.setPosition(sf::Vector2f(x,y));
    m_sud.setRotation(135);

    m_est.setPosition(sf::Vector2f(x,y));
    m_est.setRotation(225);

    m_ouest.setPosition(sf::Vector2f(x,y));
    m_ouest.setRotation(315);
}

void Cross::display(sf::RenderWindow& window)
{
    window.draw(m_nord);
    window.draw(m_sud);
    window.draw(m_est);
    window.draw(m_ouest);
}
