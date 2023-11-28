#include FlightClass.h
#include <iostream>

//getters
string flight::get_flightID() {return flightID;}
int flight::get_seatrow() {return seatrow;}
int flight::get_seats_per_row() {return seats_per_row;}
vector<string> flight::get_passenger_list() {return pList;}
seatmap flight::get_map() {return seats;}

//ctors, dtors
flight::flight() {
    flightID = 'null';
    seatrow = 0;
    seats_per_row = 0;
}
flight::flight(string ID, int row, int seats_per_row, vector <string> pList, seatmap seats) {
    ifstream in_stream('flight_info.txt'); //change to whatever file it is 
    while(in_stream.fail()) {
        string a;
        cout << "file not found; please enter proper filename in \"filename.txt\" format." << endl;
        cin >> a;
        in_stream.open(a);
    }
    while (!in_stream.eof()) {
        //read file
    }


    in_stream.close();

}
~flight();
flight(const flight& source);

//test block
int main() {
    
}