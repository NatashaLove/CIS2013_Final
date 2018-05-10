#include <iostream>
#include <cstring>

using namespace std;
// the class will remember all data changes in the main
class Motorcycle {
	private:
	//int wheels;
	string color;
	string model;
	string make;	
	string year;
		
	public:
	
	// default constructor
	Motorcycle();
	// default destructor
	~Motorcycle();	
	
	void setModel ();
	void setMake ();
	void setColor ();
	void setYear ();

	string getModel (); 
	string getMake ();
	string getColor (); 
	string getYear (); 
	
	void getMotorCycleInfo ();
	
};