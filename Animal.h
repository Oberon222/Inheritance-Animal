#pragma once
#include <string>
#include <iostream>
using namespace std;
class Animal
{
protected:
	string animalSpecies; //вид тварини
	float speed;
	float weight; // вага
	string habitat; // середовище проживання
	int lifetime;
public:
	Animal() : animalSpecies("Empty"), speed(0.0), weight(0.0), habitat("Empty"), lifetime(0)
	{ }

	Animal(string animalSpecies, float speed, float weight, string habitat, int lifetime) :animalSpecies(animalSpecies),
		speed(speed), weight(weight), habitat(habitat), lifetime(lifetime)
	{ }

	Animal(string animalSpecies) : Animal()
	{
		this->animalSpecies = animalSpecies;
	}

	void Move()const
	{

	}

	void Say()const
	{

	}
	

	void Show()const
	{
		cout << "animal Species: " << animalSpecies << endl;
		cout << "Animal speed: " << speed << endl;
		cout << "Animal weight: " << weight << endl;
		cout << " Animal habitat: " << habitat << endl;
		cout << "Animal lifetime: " << lifetime << endl;
	}
};
