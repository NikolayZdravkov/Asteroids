
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 900), "Asteroids", 
        sf::Style::Close | sf::Style::Titlebar);
    sf::Clock clock;

    while (window.isOpen()) 
    {
        float deltaTime = clock.restart().asSeconds();
        sf::Event e{};
        while (window.pollEvent(e)) 
        {
            if (e.type == sf::Event::Closed)
            {
                window.close();
            } 
        }

        //update our game

        window.clear();
        // draw the game..
        window.display();
    }
}

