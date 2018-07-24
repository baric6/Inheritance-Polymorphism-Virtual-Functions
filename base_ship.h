/*
Joe Hollon
cis 1202
july 20 2018
Parent = Child ship classes
*/
#pragma once
#ifndef base_ship_H
#define base_ship_H

#include<iostream>
#include<string>

using namespace std;

class base_ship//base class
{
protected:
	string ship;
	int year;
public:
	//default constructor
	base_ship()
	{
		ship = "";
		year = 0;
	}
	//constuctor
	base_ship(string s, int y)
	{
		ship = s;
		year = y;
	}
	//virtual functions//so children can axcess them
	virtual void set_ship(string);
	virtual void set_year(int);

	string get_ship() const;
	int get_year() const;
	void display_base_ship();
};
#endif // !base_ship_H

