#pragma once
#include <iostream>
#include<string>
#include"Animal.h"
#include"Bird.h"
using namespace std;
class Eagle : public Bird
{
	string food;
	string color;
		
public:
	Eagle(string animalSpecies, float speed, float weight, string habitat, int lifetime, string name, int flightAltitude, string food, string color) : 
		Bird( animalSpecies,  speed,  weight,  habitat,  lifetime,  name,  flightAltitude), food(food), color(color) 
	{ }

	
	void Say()const
	{
		cout << "I am saying iiiaaaa, iiiiaaaaaaa" << endl;
	}


	void Show()const
	{
		cout << "Characteristics of eagle" << endl;
		Bird::Show();
		Bird::Move();
		Say();
		cout << "Eagle food: " << food << endl;
		cout << "Eagle color: " << color << endl;
		Animal::Show();
	}
};
