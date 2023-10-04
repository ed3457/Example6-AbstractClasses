#pragma once
#include <string>
using namespace std; 
class Shape
{
private:
	string name; 

public:
	void setName(string n);
	string getName();

	virtual void draw()=0; // pure virtual function 
	virtual float calculateArea()=0; 


};

