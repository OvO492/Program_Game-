#pragma once
#include <iostream>

using namespace std;

class Message
{
public:
	void Send(const char* content);
		
	void Send(int frequency);

	void Send(const char* content, int frequency);



};