#include "Cross.hpp"
#define SCALE 12
#define SCALE2 (SCALE * 2)

using namespace std;

Cross::Cross()
{
}

Cross::Cross(int taille) : m_taille(taille)
{
    m_rect1.setSize(sf::Vector2f(m_taille, m_taille / SCALE));
    m_rect2.setSize(sf::Vector2f(m_taille, m_taille / SCALE));

    m_rect1.setOrigin(m_taille / 2, m_taille / SCALE2);
    m_rect2.setOrigin(m_taille / 2, m_taille / SCALE2);
}

void Cross::draw(int x, int y)
{
    // dessin du m_rect1 aux coordonnees x et y avec une rotation
    m_rect1.setPosition(x, y);
    m_rect1.setRotation(45);
    // dessin du m_rect2 aux coordonnees x et y avec une rotation + 45 degres avec m_rect1
    m_rect2.setPosition(x, y);
    m_rect2.setRotation(-45);
}
void Cross::display(sf::RenderWindow &window)
{
    window.draw(m_rect1);
    window.draw(m_rect2);
}