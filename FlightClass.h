#ifndef FLIGHT
#define FLIGHT

#include <fstream>
#include <string>
#include <vector>
#include "passenger.h"
#include "SeatClass.h"
using namespace std;


typedef vector<vector<seat> > seatmap;

class flight {
	private:
		char flightID[7];
		int rows; //rows are numbers, columns letters
		int cols;
		vector <Passenger> pList;
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
		int get_rows();
        int get_cols();
        vector <Passenger> get_passenger_list();
        vector <vector <seat> > get_map();
    
    
        //setters
        void set_flightID(char input[7]);
		void set_rows(int rows); //not sure if the following setters are useful...
        void set_cols(int cols);
        void set_passenger_list();
        void set_map();

        //other functions to be implemented on need basis
        void SeatAssign(int row, int col, Passenger*P);
        void RemovePass(int ID);
        void display_seatMap();
        void display_passInfo();
};

#endif