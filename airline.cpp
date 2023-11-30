#include "airline.h"
#include <iostream>
#include <string> 
#include "FlightClass.h"
#include "FlightClass.cpp"

Airline::Airline(){
    airline_name = "0";
    listofflights = {};
    numFlights = 0;
}

Airline::Airline(string airlineName, vector<flight> listof_flights, int num_Flights){
    this ->airline_name = airlineName; 
    this ->listofflights = listof_flights;
    this ->numFlights = num_Flights;
}

Airline::Airline(Airline&source){
    this ->airline_name = source.airline_name;
    this ->listofflights = source.alistofflights;
    this ->numFlights = source. numFlights;
}

Ariline::Airline& operator(const Airline&RHS){
    this ->airline_name = RHS.airline_name;
    this ->listofflights = RHS.alistofflights;
    this ->numFlights = RHS.numFlights;
}

string Airline::get_name(){return airline_name;}

vector <flight> Airline::get_list() const{return listofflights;}

int Airline::get_number(){return numFlights;}

void Airline::set_name(char name[3]){
    
    for(int i =0; i<4, i++){
        airline_name[i] = name[i];
    }
    
}

void Airline::set_list(flight&F){
    listofflights.pushback(&F);
}

void Airline::set_num(int num){numFlights = num;}

