#pragma once

#include <string>
#include <iostream>
#include "Hand.h"

class GenericPlayer : public Hand
{
	friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);

protected:
	std::string m_name;

public:
	GenericPlayer(const std::string& name = "");
	virtual ~GenericPlayer();

	virtual bool IsHitting() const = 0;
	bool IsBoosted() const;
	void Bust() const;
};

