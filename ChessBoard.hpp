#ifndef CHESSBOARD_HPP
#define CHESSBOARD_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/VertexArray.hpp>


class ChessBoard
{
public:
    ChessBoard();
    void draw(int w, int h);
    void display(sf::RenderWindow& window);

private:
    sf::VertexArray hlines, vlines;
};

#endif