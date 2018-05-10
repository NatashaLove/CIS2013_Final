#include "Motor.h"

using namespace std;

Motorcycle::Motorcycle() {
	
}

Motorcycle::Motorcycle ( string mod, string mak, string col, string y) {
	color = col;
	model = mod;
	make=mak;
	year=y;
}

Motorcycle::~Motorcycle() {
	//Leaving empty
}

void Motorcycle::setModel (string mod){
	model=mod;
}
void Motorcycle::setMake (string mak) {
	make=mak;
}
void Motorcycle::setColor (string col){
	color=col;
}
void Motorcycle::setYear (string y) {
	year=y;
}
	
string Motorcycle::getModel (){
	return model;
} 
string Motorcycle::getMake (){
	return make;
}
string Motorcycle::getColor () {
	return color;
}
string Motorcycle::getYear () {
	return year;
}
	
void Motorcycle::getMotorCycleInfo (){
	cout << " Your Motorcycle is " <<color<< " "<< model<< " "<< make << " "<< year<< " "<< endl;
	cout << endl;
}