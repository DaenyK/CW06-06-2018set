#pragma once
#include "Headers.h"

class car {
private:
	string NO;
	string color;

public:
	car(string NO, string color) :NO(NO), color(color) {}
	/*bool operator< (const car& c)const {
	if (NO > c.NO)
	return true;
	else if (NO == c.NO && color < c.color)
	return true;
	else return false;
	}*/
	string getColor()const { return color; }
	string getNo() const{ return NO; }


	friend ostream &operator<<(ostream& os, car c) 
	{
		os << c.NO << "\t" << c.color << endl;
		return os;
	}
};



class cmpByNo {
public:
	bool operator()(const car& c1, const car& c2)
	{
		return c1.getNo() > c2.getNo();
	}
};