#include "FlightClass.h"
#include <iostream>

//getters
string flight::get_flightID() {return flightID;}
int flight::get_rows() {return rows;}
int flight::get_cols() {return cols;}
vector<string> flight::get_passenger_list() {return pList;}
//seatmap flight::get_map() {return seats;}     ??????????????????


//setters
void flight::set_flightID(char source[7]){
    for(int i=0; i<8 ; i++){
        flightID[i] = source[i];
    }
}

void flight::set_rows(int rows){
    this->rows = rows;
}

void flight::set_cols(int cols){
    this->cols = cols; 
}


//ctors, dtors
flight::flight() {
    flightID = 'null';
    rows = 0;
    cols = 0;
}
~flight();
flight(const flight& source);

void flight::addPassenger(Passenger*P){
    pList.pushback(P);
}