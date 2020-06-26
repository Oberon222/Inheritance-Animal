#pragma once
#include"Animal.h"
#include"Reptile.h"
#include<iostream>
#include<string>
using namespace std;

class Cobra : public Reptile
{
	string food;
	string color;
public:
	Cobra(string animalSpecies, float speed, float weight, string habitat, int lifetime, string speciesOfReptile, int length, string food, string color) : 
		Reptile( animalSpecies,  speed,  weight,  habitat,  lifetime,  speciesOfReptile,  length), food(food), color(color)
	{ }

	
	void Say()const
	{
		cout << "I am saying Chhhhhhhhhhhh" << endl;
	}

	void Show()const
	{
		cout << "Characteristics of cobra" << endl;
		Reptile::Show();
		Reptile::Move();
		Say();
		cout << "Cobra food: " << food << endl;
		cout << "Cobra color: " << color << endl;
		Animal::Show();

	}
};
