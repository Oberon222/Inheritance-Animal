#pragma once
#include <iostream>
#include<string>
#include"Animal.h"
#include"Bird.h"
using namespace std;
class Eagle : public Animal, public Bird
{
	string food;
	string color;
		
public:
	Eagle(string food, string color,string name, int flightAltitude,
		string animalSpecies, float speed, float weight, 
		string habitat, int lifetime) : food(food), color(color), Bird( name, flightAltitude),
		Animal( animalSpecies,  speed,  weight,  habitat,  lifetime)
	{ }

	void Show()const
	{
		cout << "Characteristics of eagle" << endl;
		Bird::Show();
		cout << "Eagle food: " << food << endl;
		cout << "Eagle color: " << color << endl;
		Animal::Show();
	}
};
