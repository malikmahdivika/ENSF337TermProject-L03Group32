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
		seatmap seats;
	
	public:
        //ctors,destructors
        flight();
		flight(string ID, int rows, int cols, vector <string> pList, seatmap seats);
        ~flight();
        flight(const flight& source);

        //getters
		const char* get_flightID()const;
		int get_rows()const;
        int get_cols()const;
        vector <Passenger> get_passenger_list()const;
        vector <vector <seat> > get_map()const;
    
    
        //setters
        void set_flightID(char input[7]);
		void set_rows(int rows);
        void set_cols(int cols);
        void set_passenger_list();
        void set_map();

        //other functions
        void SeatAssign(int row, int col, Passenger*P);
        void RemovePass(int ID);
        void display_seatMap();
        void display_passInfo();
        void seat_list();
        void saveData(ofstream&out_file);
};

#endif