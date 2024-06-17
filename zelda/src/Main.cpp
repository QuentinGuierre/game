

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "Zelda ALTTP Map");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		// Dessinez votre carte ici
		window.display();
	}

	return 0;
}