#include "ChessBoard.hpp"
#include "Cross.hpp"
#include "Dot.hpp"
#include <string>

using namespace std;

int main()
{
    // Initialisation du Board
    ChessBoard grille;

    int w(500), h(500);
    cout << "Taille de la grille : x y : " << endl;
    // cin >> w >> h;
    grille.draw(w, h);
    // La croix
    Cross croix(35);
    
    // Le cercle
    Dot cercle(60);

    // création de la fenêtre
    sf::RenderWindow window(sf::VideoMode(w, h), "Tic-Tac-Toe");
    sf::RenderWindow &refWindow(window);
    window.clear(sf::Color::Black);
    // on fait tourner le programme tant que la fenêtre n'a pas été fermée
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            // fermeture de la fenêtre lorsque l'utilisateur le souhaite
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // effacement de la fenêtre en noir
        
        // c'est ici qu'on dessine tout
        
        // dessin des lignes du plateau
        window.draw(grille.getHlines());
        window.draw(grille.getVlines());

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            sf::Vector2i position = sf::Mouse::getPosition(window);
            // dessin de la croix
            cercle.draw(position.x, position.y);
            cercle.display(refWindow);
        }
        else if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
        {
            sf::Vector2i position = sf::Mouse::getPosition(window);
            // dessin du cercle
            croix.draw(position.x, position.y);
            croix.display(refWindow);
        }
        // fin de la frame courante, affichage de tout ce qu'on a dessiné
        window.display();
    }

    return 0;
}
