#include "passenger.h"
#include <iostream>
#include <string> 

string Passenger::get_fname(){return fname;}
string Passenger::get_lname(){return lname;}
string Passenger::get_p_num(){return phone_num;}
int Passenger::get_passengerID(){return passengerID;}
//getters

void Passenger::set_fname(char fname[20]){
    for(int i=0; i<20; i++){
        this->fname[i] = fname[i];
    }
}
void Passenger::set_lname(char lname[20]){
    for(int i=0; i<20; i++){
        this->lname[i] = lname[i];
    }
}
void Passenger::set_p_num(char p_num[20]){
    for(int i=0; i<20; i++){
        this->phone_num[i] = p_num[i];
    }
}
void Passenger::set_ID(int ID){
    passengerID = ID;
}
void Passenger::set_seat(char seat[4]){
    strcpy(pass_seat, seat);
}
//setters

Passenger::Passenger():fname(), lname(), phone_num(), passengerID(), pass_seat(), passenger_seat(){}
// Passenger::Passenger(string fname, string lname, string phone_num, int passengerID, string*passenger_seat);
// Passenger::~Passenger();
// Passenger::Passenger(Passenger& source);
// Passenger::Passenger& operator=(Passenger&RHS);
// //ctors,assignment operators, dtor.

char* Passenger::get_seat(){
    return pass_seat;
}