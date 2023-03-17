#include "Game.hpp"

using namespace std;

Game::Game(int w, int h) : m_grille(), m_w(w), m_h(h)
{
    for (int i = 0; i < 5; i++)
    {
        m_tab_dot[i] = Dot(60);
    }
    for (int i = 0; i < 4; i++)
    {
        m_tab_cross[i] = Cross(50);
    }
    for (int i = 0; i < 9; i++)
    {
        m_avancement[i] = 0; // 0 : vide , 1 : croix , -1 : rond
    }
}

void Game::afficherJeu(sf::RenderWindow &window)
{
    m_grille.draw(m_w, m_h);
    m_grille.display(window);
}

void Game::run(int x, int y, sf::RenderWindow &window,int tour)
{
    int i(0), j(0);
    while (regle(m_avancement) && i < 4 && j < 5)
    {
        if (tour % 2 == 0)
        {
            m_tab_cross[i].draw(x, y);
            m_tab_cross[i].display(window);
            i++;
        }
        else
        {
            m_tab_dot[j].draw(x, y);
            m_tab_dot[j].display(window);
            j++;
        }
    }
    cout << "NUL" << endl;
}

bool Game::regle(int tab[9])
{
    return true;
}