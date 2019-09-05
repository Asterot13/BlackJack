#include "Card.h"
#include <string>

Card::Card(rank r, suit s, bool ifu) : m_rank(r), m_suit(s), m_IsFaceUp(ifu)
{
}


Card::~Card()
{
}

int Card::GetValue()
{
	int value = 0;
	if (m_IsFaceUp)
	{
		value = m_rank;
		if (value > 10) 
		{
			value = 10;
		}
	}
	return value;
}

void Card::Flip()
{
	m_IsFaceUp = !(m_IsFaceUp);
}

std::ostream& operator<< (std::ostream& os, const Card& aCard)
{
	const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	const std::string SUITS[] = { "c", "d", "h", "s" };

	if (aCard.m_IsFaceUp)
	{
		os << RANKS[aCard.m_rank] << SUITS[aCard.m_suit];
	}
	else
	{
		os << "XX";
	}

	return os;
}