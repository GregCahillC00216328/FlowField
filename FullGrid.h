#pragma once
#include "GridTile.h"

class Grid
{
public:
	
	void gridManagement(sf::RenderWindow &t_window);
	void setupGrid();
private:
	
	
	Tile m_gridTiles[10][10];
};


