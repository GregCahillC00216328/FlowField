#pragma once
#include <SFML/Graphics.hpp>
class Tile
{
public:
	//Tile();
	//~Tile();
	
	void setGridPos(sf::Vector2f t_vec);
	void setTiles();
	void renderTile(sf::RenderWindow& t_window);
private:
	sf::Color m_currentCol;
	sf::Color m_borderCol;
	sf::Vector2f m_size;
	sf::Vector2f m_pos;
	sf::RectangleShape m_rect;

	
};




