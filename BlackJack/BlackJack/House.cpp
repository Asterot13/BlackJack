#include "House.h"



House::House(const std::string& name)
{
	m_name = name;
}


House::~House()
{
}

bool House::IsHitting() const
{
	return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
	if (!(m_Cards.empty()))
	{
		m_Cards[0]->Flip();
	}
	else
	{
		std::cout << "No cards to flip!\n";
	}
}
