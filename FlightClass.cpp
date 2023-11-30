#include FlightClass.h
#include <iostream>

//getters
string flight::get_flightID() {return flightID;}
int flight::get_rows() {return rows;}
int flight::get_cols() {return cols;}
vector<string> flight::get_passenger_list() {return pList;}
seatmap flight::get_map() {return seats;}

//ctors, dtors
flight::flight() {
    flightID = 'null';
    rows = 0;
    cols = 0;
}
~flight();
flight(const flight& source);

//test block
int main() {
    flight plane;
    int ID = plane.get_flightID();
    int rows = plane.get_rows();
    int cols = plane.get_cols();

    cout << ID << rows << cols;
}