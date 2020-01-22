#include "Level.h" //test

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rectRed.setSize(sf::Vector2f(300, 300));
	rectRed.setPosition(100, 100);
	rectRed.setFillColor(sf::Color::Red);

	rectGreen.setSize(sf::Vector2f(200, 200));
	rectGreen.setPosition(150, 150);
	rectGreen.setFillColor(sf::Color::Green);

	rectBlue.setSize(sf::Vector2f(100, 100));
	rectBlue.setPosition(200, 200);
	rectBlue.setFillColor(sf::Color::Blue);

	//message.setFont(font);
	//message.setString("hello");
	//message.setCharacterSize(24);
	//message.setFillColor(sf::Color::Blue);
	//message.setStyle(sf::Text::Bold | sf::Text::Underlined);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rectRed);
	window->draw(rectGreen);
	window->draw(rectBlue);
	window->draw(message);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 0, 0));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}