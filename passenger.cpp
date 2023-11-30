#include "passenger.h"
#include <iostream>
#include <string> 

Passernger::string get_fname(){return fanme;}
Passenger::string get_lname(){retunr lname;}
Passenger::string get_p_num(){return phone_num;}
Passenger::int get_passengerID(){return passengerID;}
Passenger::string get_seat(){return *passenger_seat;}
//getters

void Passenger::set_fname(char fname[20]){
    for(int i=0; i<20; i++){
        this->fname[i] = fname[i]
    }
}
void Passenger::set_lname(char lname[20]){
    for(int i=0; i<20; i++){
        this->lname[i] = lname[i]
    }
}
void Passenger::set_p_num(char p_num[20]){
    for(int i=0; i<20; i++){
        this->phone_num[i] = p_num[i]
    }
}
void Passenger::set_ID(int ID){
    passengerID = ID;
}
void Passenger::set_seat(char seat[4]){
    strcpy(pass_seat, seat);
}
//setters

Passenger::Passenger();
Passenger::Passenger(string fname, string lname, string phone_num, int passengerID, string*passenger_seat);
Passenger::~Passenger();
Passenger::Passenger(Passenger& source);
Passenger::Passenger& operator(Passenger&RHS);
//ctors,assignment operators, dtor.