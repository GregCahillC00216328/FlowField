#pragma once
#include "GridTile.h"

void Tile::setGridPos(sf::Vector2f t_vec)
{
	m_rect.setPosition(t_vec);
}

void Tile::setTiles()
{
	m_currentCol = sf::Color::Blue;
	m_borderCol = sf::Color::Black;
	m_size = sf::Vector2f(50, 50);
	m_rect.setSize(m_size);
	m_rect.setFillColor(m_currentCol);
	m_rect.setOutlineThickness(1.0f);
	m_rect.setOutlineColor(m_borderCol);
}

void Tile::renderTile(sf::RenderWindow& t_window)
{
	t_window.draw(m_rect);
}
