#include <SFML/Graphics.hpp>
#include <iostream>

class MainMenu
{
public:
	MainMenu()
	{
		if (!font.loadFromFile("arial.ttf"))
		{
			std::cerr << "Erreur lors du chargement de la police" << std::endl;
		}

		jouerText.setString("Jouer");
		jouerText.setFont(font);
		jouerText.setCharacterSize(30);
		jouerText.setPosition(350, 200);

		quitterText.setString("Quitter");
		quitterText.setFont(font);
		quitterText.setCharacterSize(30);
		quitterText.setPosition(350, 300);
	}

	void run()
	{
		sf::RenderWindow window(sf::VideoMode(800, 600), "Menu Principal");

		while (window.isOpen())
		{
			handleEvents(window);

			window.clear();

			window.draw(jouerText);
			window.draw(quitterText);

			window.display();
		}
	}

private:
	sf::Font font;
	sf::Text jouerText;
	sf::Text quitterText;

	void handleEvents(sf::RenderWindow& window)
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}

			if (event.type == sf::Event::MouseButtonPressed)
			{
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Vérifier si la souris est sur le texte "Jouer"
				if (jouerText.getGlobalBounds().contains(mousePosition.x, mousePosition.y))
				{
					std::cout << "Lancer le jeu !" << std::endl;
					// Ajoutez ici le code pour lancer le jeu
				}

				// Vérifier si la souris est sur le texte "Quitter"
				if (quitterText.getGlobalBounds().contains(mousePosition.x, mousePosition.y))
				{
					window.close();
				}
			}
		}
	}
};
