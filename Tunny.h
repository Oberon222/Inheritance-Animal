#pragma once
#include"Animal.h"
#include"Fish.h"
#include<iostream>
#include<string>
using namespace std;
class Tunny : public Fish, public Animal
{
	string color;
public:
	Tunny(string color, int length, string animalSpecies, float speed, 
		float weight, string habitat, int lifetime) : color(color), 
		Fish(length), Animal(animalSpecies, speed, weight, habitat, lifetime)
	{ }


	void Say()const
	{
		cout << " I am saying ..." << endl;
	}

	void Show()const
	{
		cout << "Characteristics of tuna " << endl;
		Fish::Show();
		Fish::Move();
		Say();
		cout << "Tunny color: " << color << endl;
		Animal::Show();
	}
};
