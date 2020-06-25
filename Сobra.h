#pragma once
#include"Animal.h"
#include"Reptile.h"
#include<iostream>
#include<string>
using namespace std;

class Cobra : public Animal, public Reptile
{
	string food;
	string color;
public:
	Cobra(string food, string color, string speciesOfReptile, 
		int length, string animalSpecies, float speed, float weight, 
		string habitat, int lifetime) : food(food), color(color),
		Reptile(speciesOfReptile, length), 
		Animal( animalSpecies,  speed,  weight,  habitat,  lifetime)
	{ }

	void Show()const
	{
		cout << "Characteristics of cobra" << endl;
		Reptile::Show();
		cout << "Cobra food: " << food << endl;
		cout << "Cobra color: " << color << endl;
		Animal::Show();

	}
};
