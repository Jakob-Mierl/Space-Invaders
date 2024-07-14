#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/OpenGL.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "skibidi");

    sf::Font font;
  

    sf::CircleShape ball(50.0f);

    ball.setFillColor(sf::Color::Green);

    ball.setPosition(sf::Vector2f(100.f, 250.f));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Clear the window
        window.clear();

        // Draw the text
        window.draw(ball);

        // Display the content of the window
        window.display();
    }

    return 0;
}
