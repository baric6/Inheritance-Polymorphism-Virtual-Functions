/*
Baric
cis 1202
july 20 2018
Parent = Child ship classes
*/
#pragma once
#ifndef cargo_ship_H
#define cargo_ship_H
#include<iostream>
#include<string>
#include "base_ship.h"

using namespace std;

class cargo_ship : public base_ship//need to use public to access base class
{
private:
	int cargo_wieght;
public:
	//default destructor
	cargo_ship()
	{
		cargo_wieght = 0;
	}
	cargo_ship(int w)
	{
		cargo_wieght = w;
	}
	void set_cargo(int);
	int get_cargo() const;
	void display_cargo();
};

#endif // !cargo_ship
