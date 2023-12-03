#include "airline.h"
#include <iostream>
#include <string> 
#include "FlightClass.h"
using namespace std;

Airline::Airline(){
    airline_name[3] = '\0';
    listofflights = {0};
    numFlights = 0;
}

// Airline::Airline(string airlineName, vector<flight> listof_flights, int num_Flights){
//     this ->airline_name = airlineName; 
//     this ->listofflights = listof_flights;
//     this ->numFlights = num_Flights; 
// }

Airline::Airline(Airline&source){
    this ->airline_name[3] = source.airline_name[3];
    this ->listofflights = source.listofflights;
    this ->numFlights = source. numFlights;
}

// Airline::Airline& operator=(const Airline&RHS){
//     this ->airline_name[3] = RHS.airline_name[3];
//     this ->listofflights = RHS.alistofflights;
//     this ->numFlights = RHS.numFlights;
// }

const char* Airline::get_name() const{return airline_name;}

vector <flight*> Airline::get_list() const{return listofflights;}

int Airline::get_number()const {return numFlights;}

void Airline::set_name(char name[3]){
    
    for(int i =0; i<4; i++){
        airline_name[i] = name[i];
    }
    
}

void Airline::set_list(flight&F){
    listofflights.push_back(&F);
}

void Airline::set_num(int num){numFlights = num;}

void Airline::display_seatMap(){
    flight* F = listofflights[0];
    F->display_seatMap();
}

void Airline::display_passInfo(){
    flight*F = listofflights[0];
    F->display_passInfo(); 
}

 void Airline::addPassenger(){
    Passenger*P = new Passenger;
    char fname[20];
    char lname[20];
    char p_num[20];
    char ID[6];
    char seat[4];
    int rownum;
    int colnum;
    
    cin.getline(fname, 20);
    cout << "Enter Passengers First Name:";
    cin.getline(fname, 20);

    for(int i =strlen(fname); i < 20; i++){
        fname[i] = ' ';
    }
    fname[19] = '\0';
    P->set_fname(fname);

    cout << "Enter Passengers Last Name:";
    cin.getline(lname, 20);

    for(int i = strlen(lname); i < 20; i++){
        lname[i] = ' ';
    }
    lname[19] = '\0';
    P->set_lname(lname);


    cout << "Enter Passengers Phone Number:";
    cin.getline(p_num, 20);

    for(int i = strlen(p_num); i < 20; i++){
        p_num[i] = ' ';
    }
    p_num[19] = '\0';
    P->set_p_num(p_num);

    cout << "Enter Passengers ID Number:";
    cin.getline(ID, 4);

    for(int i = strlen(ID); i < 4; i++){
        ID[i] = ' ';
    }
    ID[5] = '\0';
    P->set_p_num(ID);

    cout << "Enter Passengers Desired Seat Location:";
    cin.getline(seat, 4);

    for(int i = strlen(seat); i < 4; i++){
        seat[i] = ' ';
    }
    seat[3] = '\0';
    P->set_seat(seat);

    if(isdigit(seat[1])){
        rownum = (seat[0] - '0')*10 + (seat[1] - '0');
        colnum = tolower(seat[2]) - 'a' + 1;
    }
    else if(isalpha(seat[1])){
        rownum = seat[0] - '0';
        colnum = tolower(seat[1]) - 'a' + 1;
    }

    flight*F = listofflights[0];
    F->SeatAssign(rownum, colnum, P);

 }

 void Airline::RemovePass(){
        int ID;
        cout << "Enter ID Number of Passenger to Be Removed:";
        cin >> ID;

        flight *F = listofflights[0];
        F->RemovePass(ID);
     }