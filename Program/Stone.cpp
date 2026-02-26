#include "stdafx.h"
#include "Stone.h"

Stone::Stone()
{
	hardness = 1.5f;
	resistance = 6.0f;
}

void Stone::Describe()
{
	cout << "Stone hardness" << hardness << endl;
	cout << "Stone resistance" << hardness << endl;
}

Stone::~Stone()
{
	cout << "Destroyed stone" << endl;
}
