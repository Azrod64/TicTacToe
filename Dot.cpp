#include "Dot.hpp"

using namespace std;

Dot::Dot(int diametre) : m_diametre(diametre), m_cercle(sf::CircleShape(diametre/2))
{
    m_cercle.setOrigin(m_diametre / 2, m_diametre / 2);
}

Dot::Dot()
{}

void Dot::draw(int x, int y)
{
    // positionnement du cercle
    m_cercle.setPosition(x,y);
    cout << "draw cercle" << endl;

}

void Dot::display(sf::RenderWindow& window)
{
    window.draw(m_cercle);
    cout << "afficher cercle" << endl;
}
