#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "ChessBoard.hpp"
#include "Dot.hpp"
#include "Cross.hpp"

class Game 
{
public:
    Game(int w,int h);
    void afficherJeu(sf::RenderWindow& window);
    void run(int x,int y,sf::RenderWindow& window,int tour);
    bool regle(int tab[9]);
    
    
private:
    Dot m_tab_dot[5];
    Cross m_tab_cross[4];
    ChessBoard m_grille;
    int m_w,m_h;
    int m_avancement[9]; // 0 : vide , 1 : croix , -1 : rond
};

#endif