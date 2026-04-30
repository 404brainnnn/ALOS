#include <SFML/Graphics.hpp>
#include <iostream>

using namespace sf;

int main() {
    RenderWindow window(VideoMode(800, 600), "Logistics Optimizer");

    Font font;
    font.loadFromFile("/System/Library/Fonts/Supplemental/Arial.ttf");

    Text title("Logistics Optimization System", font, 24);
    title.setPosition(100, 50);

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear(Color::Black);
        window.draw(title);
        window.display();
    }

    return 0;
}