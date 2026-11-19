#include <iostream>
using namespace std;

class Flight {
	int flightNumber;
	string source;
	string destination;
	double fare;
	
	public:
		Flight(int flightNumber, string source, string destination, double fare){
			this->flightNumber = flightNumber;
			this->source = source;
			this->destination = destination;
			this->fare = fare;
		}
		
		void displayFlightinfo(){
			cout << "Flight Number: " << this->flightNumber << endl;
			cout << "Source: " << this->source << endl;
			cout << "Destination: " << this->destination << endl;
			cout << "Flight Fare: " << this->fare << endl;
		}
};

int main(){
	Flight myFlight(1000, "Delhi", "Lucknow", 500);
	
	myFlight.displayFlightinfo();
	
}
