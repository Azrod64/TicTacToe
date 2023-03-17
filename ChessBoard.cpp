#include "ChessBoard.hpp"

using namespace std;

ChessBoard::ChessBoard() : hlines(sf::Lines, 4), vlines(sf::Lines, 4)
{
    // ne rien mettre
    /*Pourquoi ca ne fonctionne pas ?
        hlines(sf::Lines,2)*/
}

void ChessBoard::draw(int w, int h)
{
    // Mise à jour des positions de la première ligne verticale
    hlines[0].position = sf::Vector2f(w / 3, 0);
    hlines[1].position = sf::Vector2f(w / 3, h);
    // Mise à jour des positions de la seconde ligne verticale
    hlines[2].position = sf::Vector2f(2 * (w / 3), 0);
    hlines[3].position = sf::Vector2f(2 * (w / 3), h);
    // Mise à jour des positions de la seconde ligne horizontale
    vlines[0].position = sf::Vector2f(0, h / 3);
    vlines[1].position = sf::Vector2f(w, h / 3);
    // Mise à jour des positions de la seconde ligne horizontale
    vlines[2].position = sf::Vector2f(0, 2 * (h / 3));
    vlines[3].position = sf::Vector2f(w, 2 * (h / 3));
}

void ChessBoard::display(sf::RenderWindow& window)
{
    window.draw(hlines);
    window.draw(vlines);
}
