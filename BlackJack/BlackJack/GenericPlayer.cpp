#include "GenericPlayer.h"



GenericPlayer::GenericPlayer(const std::string& name) : m_name(name)
{

}


GenericPlayer::~GenericPlayer()
{
}

bool GenericPlayer::IsBoosted() const
{
	return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
	std::cout << m_name << " busts.\n";
}

std::ostream& operator<< (std::ostream& os, const GenericPlayer& aGenericPlayer)
{
	os << aGenericPlayer.m_name << ":\t";

	std::vector<Card*>::const_iterator pCard;
	if (!aGenericPlayer.m_Cards.empty())
	{
		for (pCard = aGenericPlayer.m_Cards.begin();
			pCard != aGenericPlayer.m_Cards.end();
			++pCard)
		{
			os << *(*pCard) << "\t";
		}

		if (aGenericPlayer.GetTotal() != 0)
		{
			std::cout << "(" << aGenericPlayer.GetTotal() << ") ";
		}
		else
		{
			os << "<empty>";
		}
	}

	return os;
}