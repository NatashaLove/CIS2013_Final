#include <iostream>
#include <string>
#include "Motor.h"

// 

using namespace std;

int  main() {
	
	string model;
	string make;	
	string color;
	string year;
	
	cout << endl;
	cout << "		***			 Hello!			***  " << endl;
	cout << "		***		You can make your Motorcycle:	***  " << endl;
	cout << "		------------------------------------------------ " << endl;
	cout << endl;
	cout << "Choose the model:  " << endl;
	cin >> model;
	cout << endl;
	cout << "Choose the make:  " << endl;
	cin >> make;
	cout << endl;
	cout << "Choose the color:  " << endl;
	cin >> color;
	cout << endl;
	cout << "Choose the year:  " << endl;
	cin >> year;
	cout << endl;
	
	Motorcycle motorcycle (model,make, color, year);
	motorcycle.getMotorCycleInfo();
	
	return 0;
}