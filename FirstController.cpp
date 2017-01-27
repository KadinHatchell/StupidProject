/*
 * FirstController.cpp
 *
 *  Created on: Jan 25, 2017
 *      Author: Kadin
 */


#include <iostream>
#include "FirstController.h"


using namespace std;

void FirstController :: start()

{
	cout << "Goodbye world" << endl;
	int myAge = 17;
	cout << "I am " << myAge << " years old." << endl;
	cout << "\n";

	specialOutput();
}

void FirstController :: specialOutput()
{
	cout << "How old are you" << endl;
	int yourAge;
	cin >> yourAge;
	cout << "Oh, so you are " << yourAge << " years old!" << endl;
	string myName;
	cin.ignore();
	cout << "Type in your name" << endl;
	getline(cin, myName);
	cout << "you typed: " << myName << endl;
	cout << "Type in your name and age" << endl;
	cin >> myName >> yourAge;
	cout << "you typed: " << myName << " and " << yourAge << endl;


}

