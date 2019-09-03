#pragma once
#include <vector>
#include <iostream>
#include "Card.h"

class Hand
{
private:
	std::vector<Card*> m_Cards;

public:
	Hand();
	~Hand();

	void Add(Card* pCard);
	void Clear();
	int GetTotal();
};
