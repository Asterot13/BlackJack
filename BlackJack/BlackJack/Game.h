#pragma once
#include "House.h"
#include "Deck.h"
#include "Player.h"
#include <iostream>
#include <vector>

class Game
{
private:
	Deck m_Deck;
	House m_House;
	std::vector<Player> m_Players;

public:
	Game(std::vector<std::string> names);
	~Game();

	void Play();
};

