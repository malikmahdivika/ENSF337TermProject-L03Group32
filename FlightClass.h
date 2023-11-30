#include <fstream>
using namespace std;
#include <string>
#include <vector>
#include "passenger.h"

#ifndef flight
def flight

typedef vector<vector<string>> seatmap;

class flight {
	private:
		char flightID[7];
		int rows; //rows are numbers, columns letters
		int cols;
		vector <Passenger*> pList;
		seatmap seats;
        //other data members to be added on need basis
	
	public:
        //ctors,destructors
        flight();
		flight(string ID, int rows, int cols, vector <string> pList, seatmap seats);
        ~flight();
        flight(const flight& source);

        //getters
		string get_flightID();
		int get_rows(int rows);
        int get_cols(int cols);
        vector get_passenger_list();
        vector get_map();
    
        

        //setters
        void set_flightID(char input[7]);
		void set_rows(); //not sure if the following setters are useful...
        void set_cols();
        void set_passenger_list();
        void set_map();

        //other functions to be implemented on need basis
        void flight::addPassenger(Passenger*P);
}
#endif