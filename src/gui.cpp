#include <SFML/Graphics.hpp>
#include "Algorithms.h"
#include <string>

using namespace sf;
using namespace std;

int main() {
    RenderWindow window(VideoMode(Vector2u(800, 600)), "Logistics Optimizer");

    Font font;
    font.openFromFile("/System/Library/Fonts/Supplemental/Arial.ttf");

    Text title(font, "Logistics Optimization System", 24);
    title.setPosition(Vector2f(200.f, 50.f));

    // Load Button
    RectangleShape loadBtn(Vector2f(200.f, 50.f));
    loadBtn.setPosition(Vector2f(300.f, 200.f));
    loadBtn.setFillColor(Color::Blue);

    Text loadText(font, "Load Orders", 18);
    loadText.setPosition(Vector2f(320.f, 210.f));

    // Optimize Button
    RectangleShape optBtn(Vector2f(200.f, 50.f));
    optBtn.setPosition(Vector2f(300.f, 300.f));
    optBtn.setFillColor(Color::Red);

    Text optText(font, "Optimize", 18);
    optText.setPosition(Vector2f(340.f, 310.f));

    // Output
    Text output(font, "Status: Ready", 18);
    output.setPosition(Vector2f(50.f, 500.f));

    while (window.isOpen()) {
        while (auto event = window.pollEvent()) {
            if (event->is<Event::Closed>())
                window.close();

            if (event->is<Event::MouseButtonPressed>()) {
                // ✅ FIXED mouse detection
                Vector2i pixelPos = Mouse::getPosition(window);
                Vector2f mousePos = window.mapPixelToCoords(pixelPos);

                // Load button
                if (loadBtn.getGlobalBounds().contains(mousePos)) {
                    loadOrders();
                    output.setString("Orders Loaded");
                    loadBtn.setFillColor(Color::Green);
                }

                // Optimize button
                if (optBtn.getGlobalBounds().contains(mousePos)) {
                    int profit = optimize();
                    output.setString("Profit: " + to_string(profit));
                    optBtn.setFillColor(Color::Green);
                }
            }
        }

        window.clear();
        window.draw(title);
        window.draw(loadBtn);
        window.draw(loadText);
        window.draw(optBtn);
        window.draw(optText);
        window.draw(output);
        window.display();
    }

    return 0;
}