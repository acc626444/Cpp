#include <SFML/Graphics.hpp>
#include "SFML/Graphics/Text.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(400, 400), "Text");
    sf::Font myFont;
    myFont.loadFromFile("Texture/Font/Candal.ttf");
    sf::Text myText;
    myText.setFont(myFont);
    myText.setString("I AM AN ALIEN");
    myText.setCharacterSize(24);
    myText.setFillColor(sf::Color::White);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        myText.move(0.01f, 0);
        if (myText.getPosition().x > 400)
            myText.setPosition(-200, 0);

        window.clear();
        window.draw(myText);
        window.display();
    }

}
/*

*/