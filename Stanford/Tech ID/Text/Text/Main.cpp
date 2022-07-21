#include <SFML/Graphics.hpp>
#include "SFML/Graphics/Text.hpp"
using namespace std;
int main()
{
    sf::RenderWindow window(sf::VideoMode(1600, 800), "Text");
    sf::Font myFont;
    myFont.loadFromFile("Texture/Font/Candal.ttf");
    sf::Text myText;
    sf::Text q;
    sf::Text r;
    sf::Text txt;
    myText.setFont (myFont);
    r.setFont (myFont);
    q.setFont (myFont);
    txt.setFont(myFont);
    int a = 77;
    q.setString ("points");
    r.setString (to_string (a));
    myText.setString (to_string (a));
    txt.setString("hi");
    q.setPosition (0, 50);
    r.setPosition (125, 50);
    txt.setPosition (-50, 0);
    myText.setCharacterSize(24);
    myText.setFillColor (sf::Color::White);
    q.setFillColor (sf::Color::Green);
    r.setFillColor (sf::Color::Green);
    txt.setFillColor (sf::Color::White);


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
        txt.move (0.01f, 0);
        if(txt.getPosition ().x > 400)
            txt.setPosition (-200, 0);

        window.clear();
        window.draw (q);
        window.draw (r);
        window.draw (myText);
        window.draw(txt);
        window.display();
    }

}
/*

*/