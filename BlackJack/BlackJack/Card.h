#pragma once

enum rank
{

};

enum suit
{

};

class Card
{
private:
	rank m_rank;
	suit m_suit;
	bool m_IsFaceUp;
	
public:
	Card();
	~Card();

	int GetValue();
	void Flip();
};

