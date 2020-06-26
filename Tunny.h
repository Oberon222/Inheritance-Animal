#pragma once
#include"Animal.h"
#include"Fish.h"
#include<iostream>
#include<string>
using namespace std;
class Tunny : public Fish
{
	string color;
public:
	Tunny(string animalSpecies, float speed, float weight, string habitat, int lifetime, int length,string color) : 
		Fish( animalSpecies,  speed,  weight,  habitat,  lifetime,  length), color(color) { }


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
