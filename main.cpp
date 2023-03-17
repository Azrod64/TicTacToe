#include "Game.hpp"
#include <string>

using namespace std;

int main()
{
    // Création de la fenêtre
    int w(0), h(0),tour(0);
    cout << "Taille de la grille : x y : " << endl;
    cin >> w >> h;
    sf::RenderWindow window(sf::VideoMode(w, h), "Tic-Tac-Toe");

    // Passage par réréference
    sf::RenderWindow &refWindow(window);

    // Initialisation du Game
    Game game(w, h);
    game.afficherJeu(refWindow);
    window.display();
    // on fait tourner le programme tant que la fenêtre n'a pas été fermée
    while (window.isOpen())
    {
        sf::Event event;

        // Effacement de la fenêtre en noir
        window.clear(sf::Color::Black);

        game.afficherJeu(refWindow);
        
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::MouseButtonPressed)
            {
                sf::Vector2i position = sf::Mouse::getPosition(window);
                game.run(position.x, position.y, window,tour);
                // fin de la fenêtre courante, affichage de tout ce qu'on a dessiné
                window.display();
                tour++;
            }
            else if (event.type == sf::Event::Closed)
                // fermeture de la fenêtre lorsque l'utilisateur le souhaite
                window.close();
        }
    }

    return 0;
}
