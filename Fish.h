#pragma once
#include"Animal.h"
#include <iostream>
#include<string>
using namespace std;

class Fish : public Animal
{
protected:
	int length;
public:
	Fish(string animalSpecies, float speed, float weight, string habitat, int lifetime,int length) : 
		Animal( animalSpecies,  speed,  weight,  habitat,  lifetime), length(length) { }

	void Move()const
	{
		cout << "I swim" << endl;
	}

	void Show()const
	{
		cout << "Fish length: " << length << endl;
	}

};
