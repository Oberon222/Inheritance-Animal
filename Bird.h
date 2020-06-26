#pragma once
#include <iostream>
#include <string>
#include"Animal.h"
using namespace std;

class Bird : public Animal
{
protected:
	string name;
	int flightAltitude; // висота польоту 
public:
	Bird() : name("No name"), flightAltitude(0)
	{ }
	Bird(string animalSpecies, float speed, float weight, string habitat, int lifetime,string name,  int flightAltitude) : 
		Animal(animalSpecies, speed, weight, habitat, lifetime), name(name), flightAltitude(flightAltitude) 
	{ }

	

	void Move()const
	{
		cout << "I'm flying!!!" << endl;
	}

	
	void Show()const
	{
		cout << "Bird name: " << name << endl;
		cout << "Bird flight Altitude: " << flightAltitude << endl;
	}
};
