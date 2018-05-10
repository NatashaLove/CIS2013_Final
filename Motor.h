#include <iostream>
#include <cstring>
//g++ CIS2013_Final.cpp

using namespace std;
// the class will remember all data changes in the main
class Motorcycle {
	private:
	
	string color;
	string model;
	string make;	
	string year;
		
	public:
	
	// default constructor
	Motorcycle();
	
	Motorcycle (string mod, string mak, string col, string y);
	
	// default destructor
	~Motorcycle();	
	
	void setModel (string);
	void setMake (string);
	void setColor (string);
	void setYear (string);

	string getModel (); 
	string getMake ();
	string getColor (); 
	string getYear (); 
	
	void getMotorCycleInfo ();
	
};