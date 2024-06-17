
class Maps
{
private:
	sf::Sprite sprite;
	sf::Texture textureSheet;
	void initTexture();
	void initSprite();

public:
	Maps();

	void update();
	void render(sf::RenderTarget& target);
};
