#pragma once
#include "FullGrid.h"

void Grid::setupGrid()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m_gridTiles[i][j].setTiles();
			m_gridTiles[i][j].setGridPos(sf::Vector2f(500 + (50 * j), 300 + (50 * i)));
		}
	}
}

void Grid::gridManagement(sf::RenderWindow& t_window)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			m_gridTiles[i][j].renderTile(t_window);
		}
	}
}

