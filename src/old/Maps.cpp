#include "Maps.h"
#include "PCH.hpp"

Maps::Maps()
{
	this->initTexture();
	this->initSprite();
}

void Maps::initTexture()
{
	if (!this->textureSheet.loadFromFile("src/textures/maps.png"))
	{
		std::cout << "Erreur, maps"
				  << "\n";
	}
}

void Maps::initSprite()
{
	this->sprite.setTexture(this->textureSheet);

	this->sprite.setTextureRect(sf::IntRect(1500, 1500, 4096, 4096));
	this->sprite.setScale(2.0f, 2.0f);
}

void Maps::render(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}
