#include <string>
#include <vector>

#ifndef flight
def flight

class flight {
	private:
		string flightID;
		int seatrow;
		int seats_per_row;
		vector <string> pList;
		vector <vector <string>> seatmap;
        //other data members to be added on need basis
	
	public:
        //ctors,destructors
        flight();
		flight(string ID, int row, int seatsperrow, vector <string> passlist, vector <vector<string>> map);
        ~flight();
        flight(const flight& source);

        //getters
		string get_flightID();
		int get_seatrow();
        vector get_passenger_list();
        vector get_map();

        //setters
        void set_flightID(string input);
		//void set_seatrow(); not sure if the following setters are useful...
        //void set_passenger_list();
        //void set_map();

        //other functions to be implemented on need basis
        
}
#endif