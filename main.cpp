/*
Baric
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

int main()
{
	//enter values ShipClass obj
	//print contents of ShipClass obj
	//use get line to set var
	cout << "XXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "X Parent Ship class X" << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << endl;
	base_ship shipz;
	string ship;
	int year;
	cout << "Please enter Ships name: ";
	getline(cin, ship);
	cout << "Please enter year built: ";
	cin >> year;
	shipz.set_ship(ship);
	shipz.set_year(year);
	///////////////////////////////////

	//enter values of CruiseShip obj
	//print contents of CruiseShip obj
	cout << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "X Child Cruise class X" << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << endl;
	cin.ignore();
	cruise_ship cruise;
	string cruise_name;
	int cruise_year;
	int cruise_passager;
	cout << "Please enter Cruise ship: ";
	getline(cin, cruise_name);
	cout << "Please enter year built: ";
	cin >> cruise_year;
	cout << "Please enter max passagers: ";
	cin >> cruise_passager;
	//cruise set/polymorphisum
	cruise.set_ship(cruise_name);
	cruise.set_year(cruise_year);
	cruise.set_passager(cruise_passager);
	///////////////////////////////////

	//enter value of CargoShip obj
	//print contents of CargoShip obj
	cout << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << "X Child Cargo class X" << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXX" << endl;
	cout << endl;
	cin.ignore();
	cargo_ship cargoz;
	string cargo_name;
	int cargo_year;
	int cargo_space;
	cout << "Please enter the Cargo ships name: ";
	getline(cin, cargo_name);
	cout << "Please enter year built: ";
	cin >> cargo_year;
	cout << "Please enter the cargo capacity: ";
	cin >> cargo_space;
	//cruise set/polymorphisum
	cargoz.set_ship(cargo_name);
	cargoz.set_year(cargo_year);
	cargoz.set_cargo(cargo_space);
	////////////////////////////////////////
	//display ship data
	cout << endl;
	cout << "Ship details:" << endl;
	cout << "----------------------" << endl;
	shipz.display_base_ship();
	cout << "----------------------" << endl;

	cout << endl;
	cout << "Cruise details: " << endl;
	cout << "----------------------" << endl;
	cruise.display_cruise();
	cout << "----------------------" << endl;

	cout << endl;
	cout << "Cargo details: " << endl;
	cout << "----------------------" << endl;
	cargoz.display_cargo();
	cout << "----------------------" << endl;
	cout << endl;
	//////////////////////////////////
	system("pause");
	return 0;
}
	
