#include <SFML/Graphics.hpp>
#include <optional>

using namespace sf;

int main() {
    RenderWindow window(VideoMode(Vector2u(800, 600)), "Logistics Optimizer");

    Font font;
if (!font.openFromFile("/System/Library/Fonts/Supplemental/Arial.ttf")) {
    return -1;
}

    Text title(font, "Logistics Optimization System", 24);
    title.setPosition(Vector2f(100.f, 50.f));

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<Event::Closed>())
                window.close();
        }

        window.clear(Color::Black);
        window.draw(title);
        window.display();
    }

    return 0;
}