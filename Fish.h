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
	Fish(int length) : length(length)
	{ }
	void Show()const
	{
		cout << "Fish length: " << length << endl;
	}

};
