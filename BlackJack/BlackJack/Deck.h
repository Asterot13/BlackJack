#pragma once
#include "Hand.h"
#include "GenericPlayer.h"

class Deck
{
public:
	Deck();
	~Deck();

	void Populate();
	void Shuffle();
	void Deal(Hand& aHand);
	void AdditionalCards(GenericPlayer& aGenericPlayer);
};

