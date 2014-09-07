#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <iostream>

int main()
{
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML WORK!");

	sf::Music music;

	if (!music.openFromFile("MainMusic.ogg"))
	{
		std::cout << "ERROR" << std::endl;
	}

	music.play();

	music.setPlayingOffset(sf::seconds(10));

	//music.stop();

	music.setVolume(15);

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		window.clear();

		window.display();
	}
}