#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
# define FIG_MAX 9

class Game 
{
public:
    Game();
    ~Game();
    
    
private:
    int *m_tableau[FIG_MAX];
};

#endif