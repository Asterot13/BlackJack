#pragma once
#include <string>
#include <iostream>

class GenericPlayer
{
private:
	std::string m_name;

public:
	GenericPlayer();
	~GenericPlayer();

	virtual bool IsHitting() const = 0;
	bool IsBoosted() const;
	void Bust() const;
};

