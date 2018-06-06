#pragma once
#include "Headers.h"

class bus 
{
private:
	int marshrut;
	string name;
	string sname;
	int places;
	int NO;
public:
	bus() = default;
	bus(int marshrut, string name, string sname, int places, int NO)
	{
		this->marshrut = marshrut;
		this->name = name;
		this->sname = sname;
		this->places = places;
		this->NO = NO;
	}
	

	int getMarshrut()const { return this->marshrut; }
	int getNo() const { return  this->NO; }
	int getPlaces() const { return  this->places; }
	string getName() const { return  this->name; }
	string getSname()const { return  this->sname; }

	friend istream &operator>>(istream& is, bus& b);
	friend ostream &operator<<(ostream& os, bus b);
};

inline istream & operator>>(istream & is, bus &b)
{
	is >> b.marshrut >> b.name >> b.sname >> b.places >> b.NO;
	return is;
}

ostream & operator<<(ostream & os, bus b)
{
	os << b.getMarshrut() << "\t" << b.getName() << "\t" << b.getSname() << "\t" << b.getPlaces()<< "\t" << b.getNo()<< endl;
	return os;
}


class cmpByBusNo{
public:
	bool operator()(const bus& b1, const bus& b2)
	{
		return b1.getNo() < b2.getNo();
	}
};

class cmpByBusMarshrut {
public:
	bool operator()(const bus& b1, const bus& b2)
	{
		return b1.getMarshrut() < b2.getMarshrut();
	}
};