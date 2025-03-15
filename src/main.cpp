#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({1200, 800}), "SFML works!");


    
    std::array lineX = 
    {
        sf::Vertex{sf::Vector2f(500.f,400.f)},
        sf::Vertex{sf::Vector2f(800.f,400.f)}
    };

    std::array lineY = {
        sf::Vertex{sf::Vector2f(500.f,100.f)},
        sf::Vertex{sf::Vector2f(500.f,400.f)}
    };




    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {

            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.draw(lineX.data(), lineX.size(), sf::PrimitiveType::Lines);
        window.draw(lineY.data(), lineY.size(), sf::PrimitiveType::Lines);
        window.display();
    }
}
