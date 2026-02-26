#include "stdafx.h"
#include "Concrete.h"

Concrete::Concrete()
{
	hardness = 0.5f;
	resistance = 0.5f;
}

void Concrete::Describe()
{
	cout << "Concrete hardness" << hardness << endl;
	cout << "Concrete resistance" << hardness << endl;
}

Concrete::~Concrete()
{
	cout << "Destroyed Concrete" << endl;
}
