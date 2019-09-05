#pragma once
#include <vector>
#include <iostream>
#include "Card.h"

class Hand
{
protected:
	std::vector<Card*> m_Cards;

public:
	Hand();
	~Hand();

	void Add(Card* pCard);
	void Clear();
	int GetTotal() const;
};
