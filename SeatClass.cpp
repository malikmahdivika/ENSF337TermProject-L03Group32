#include "SeatClass.h"


void seat::set_rownum(int rnum){
    rownum = rnum;
}
void seat::set_column(char col){
    column = col;
}
void seat::set_status(bool status){
    this-> seat_status = status; 
}

int seat::get_rownum(){
    return rownum;
}
char seat::get_column(){
    return seat_status;
}
bool seat::get_status(){
    return seat_status;
}
int seat::get_passID(){
    return passengerID;
}

seat::seat(int row, char col, bool status){
    rownum = row;
    column = col;
    seat_status = status;
}

seat::seat():rownum(0), column(0), seat_status(false),pass(nullptr){}

void seat::removePassenger(){
    seat_status = false;
    delete pass; 
}

seat::~seat(){
    delete pass;
    pass = nullptr;
    passengerID = 0;
    seat_status = false;
}

void seat::set_passenger(Passenger*P){
    pass = P;
    passengerID = P->get_passengerID();
}

void seat::seatAssign(Passenger*P){
    set_passenger(P);
    set_status(true);
}

void seat::displayPassenger()
{
    if (seat_status)
        pass->displayPassenger();
}

void seat::saveData(ofstream&out_file){
    if(seat_status)
    {
        pass->saveData(out_file);
    }
}

