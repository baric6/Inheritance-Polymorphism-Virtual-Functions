/*
Baric
cis 1202
july 20 2018
Parent = Child ship classes
*/
#pragma once
#ifndef cruise_ship_h
#define cruise_ship_H
#include<iostream>
#include<string>
#include "base_ship.h"

class cruise_ship : public base_ship//need to use public to access base class
{
private:
	int passagers;
public:
	//default constructor
	cruise_ship()
	{
		passagers = 0;
	}
	//constructor
	cruise_ship(int p)
	{
		passagers = p;
	}
	void set_passager(int);
	int get_passager() const;
	void display_cruise();

};

#endif // !cruise_ship_h

