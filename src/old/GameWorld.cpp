#include "GameWorld.h"

GameWorld::GameWorld()
{
	gridLength = 8;
	setUpInitialState();
}
void GameWorld::setUpInitialState()
{

	exitPos = sf::Vector2i(1, 0);
	//PlayerPos = sf::Vector2i(gridLength - 1, gridLength - 1);

	setUpTiles();
}

void GameWorld::setUpTiles()
{
	tiles.clear();
	std::vector<GameTile*> firstRow;
	int b = 0;

	for (int i = 0; i < gridLength; i++)
	{

		firstRow.push_back(new GameTile("src/textures/wall.png", b, 0, false, false));
		b = b + 50;
	}
}
