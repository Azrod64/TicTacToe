#include "Game.hpp"

using namespace std;

Game::Game() 
{
    for (int i = 0; i < FIG_MAX; i++)
    {
        m_tableau[i] = NULL; // initialise tout les pointeurs à NULL
    }
    
}

Game::~Game() {
   delete m_tableau;
}