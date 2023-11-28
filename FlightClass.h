#include <fstream>
using namespace std;
#include <string>
#include <vector>

#ifndef flight
def flight

typedef vector<vector<string>> seatmap;

class flight {
	private:
		string flightID;
		int seatrow; //rows are numbers, columns letters
		int seats_per_row;
		vector <string> pList;
		seatmap seats;
        //other data members to be added on need basis
	
	public:
        //ctors,destructors
        flight();
		flight(string ID, int row, int seats_per_row, vector <string> pList, seatmap seats);
        ~flight();
        flight(const flight& source);

        //getters
		string get_flightID();
		int get_seatrow();
        int get_seats_per_row();
        vector get_passenger_list();
        vector get_map();

        //setters
        void set_flightID(string input);
		void set_seatrow(); //not sure if the following setters are useful...
        void set_passenger_list();
        void set_map();

        //other functions to be implemented on need basis
        
}
#endif