#pragma once
class Block
{
protected:
	float resistance;
	float hardness;
public:
	virtual void Describe() = 0;
};

