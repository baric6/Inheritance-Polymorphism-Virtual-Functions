/*
Joe Hollon
cis 1202
july 20 2018
Parent = Child ship classes
*/
#include<iostream>
#include<string>
#include "base_ship.h"
#include "cruise_ship.h"
#include "cargo_ship.h"

using namespace std;

//base class functions
void base_ship::set_ship(string s)
{
	ship = s;
}
void base_ship::set_year(int y) 
{
	year = y;
}
string base_ship::get_ship() const
{
	return ship;
}
int base_ship::get_year() const
{
	return year;
}
void base_ship::display_base_ship()
{
	cout <<"Ship Name: "<< ship << endl;
	cout <<"Year Built: "<< year << endl;
}
/////////////////////////////////////////////////////////
//cruise ship functions
void cruise_ship::set_passager(int p)
{
	passagers = p;
}
int cruise_ship::get_passager() const
{
	return passagers;
}
void cruise_ship::display_cruise()
{
	display_base_ship();//from parent function
	cout <<"Max Passagers: "<< passagers << endl;
}
///////////////////////////////////////////////////////////
//cargo ship functions
void cargo_ship::set_cargo(int w)
{
	cargo_wieght = w;
}
int cargo_ship::get_cargo() const
{
	return cargo_wieght;
}
void cargo_ship::display_cargo()
{
	display_base_ship();//from parent functions
	cout <<"Cargo Capacity: "<< cargo_wieght << endl;
}