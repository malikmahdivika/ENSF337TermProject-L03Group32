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
		flight(string ID, int row, int seats_per_row);
		string get_flightID();
		int get_seatrow();
        //other functions to be implemented on need basis
        
}
#endif