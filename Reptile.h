#pragma once
#include"Animal.h"
#include<iostream>
#include <string>
using namespace std;
enum REPTILE
{
	SNAKES,
	TURTLES,
	CROVODILES,
	LIZARDS
};

class Reptile : public Animal
{
protected:
	string speciesOfReptile;
	int length;
public:
	Reptile(string speciesOfReptile, int length) : speciesOfReptile(speciesOfReptile), length(length)
	{ }

	void Show()const
	{
		cout << "Species Of Reptile: " << speciesOfReptile << endl;
	}

};