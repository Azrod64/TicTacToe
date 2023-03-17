#include "Dot.hpp"

using namespace std;

Dot::Dot(int diametre) : m_diametre(diametre), m_cercle(sf::CircleShape(diametre/2))
{
    m_cercle.setOrigin(m_diametre / 2, m_diametre / 2);
}

void Dot::draw(int x, int y)
{
    // positionnement du cercle
    m_cercle.setPosition(x,y);

}

void Dot::display(sf::RenderWindow& window)
{
    window.draw(m_cercle);
}
