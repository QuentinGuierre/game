#include "GameTile.h"
#include <SFML/Graphics.hpp>
#include <vector>
class GameWorld
{
private:
	sf::Vector2i exitPos;
	sf::Vector2i playerPos;

	void setUpInitialState();
	void setUpTiles();

public:
	std::vector<GameTile*> tiles;
	int gridLength;
	GameWorld();
	void RenderMaps();
};
