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
	Bird(string name,  int flightAltitude) : name(name), flightAltitude(flightAltitude), Animal(animalSpecies,speed, weight, habitat,lifetime)
	{ }

	Bird(string name) : Bird()
	{
		this->name = name;
	}

	void Show()const
	{
		cout << "Bird name: " << name << endl;
		cout << "Bird flight Altitude: " << flightAltitude << endl;
	}
};
