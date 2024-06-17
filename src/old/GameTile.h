#include <SFML/Graphics.hpp>

class GameTile
{
private:
public:
	bool isPassable;
	bool isExit;
	sf::Vector2f pos;
	sf::Texture texture;
	sf::Sprite sprite;

	GameTile(std::string, float, float, bool, bool);
	bool setUpSprite(std::string);
};
