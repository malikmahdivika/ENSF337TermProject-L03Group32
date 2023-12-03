#include "FlightClass.h"
#include <iostream>

//getters
string flight::get_flightID() {return flightID;}
int flight::get_rows() {return rows;}
int flight::get_cols() {return cols;}
vector <Passenger> flight::get_passenger_list() {return pList;}
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
flight::flight(){
    flightID[7] = 'null';
    rows = 0;
    cols = 0;
}

flight::~flight(){

}

flight::flight(const flight& source){
    
}


 //other required functions
void flight::SeatAssign(int row, int col, Passenger*P){
            if(seats.at(row).at(col).get_status() == true){
                cout << "This Seat is Already Taken!";
                delete P;
                return;
            }
            seats.at(row).at(col).set_passenger(P);
            seats.at(row).at(col).set_status(false);
}

void flight::RemovePass(int ID){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(seats[i][j].get_passID() == ID);
                seats[i][j].removePassenger();
            }
        }
}
 

void flight::display_seatMap(){
    std::cout << "       Aircraft Seat Map     " << std::endl;
    std::cout << "    A    B    C    D    E    F" << std::endl;

    for (int i = 0; i < rows; ++i) {
        std::cout << "  +---+---+---+---+---+---+---+" << std::endl;
        std::cout << i << " ";
        for (int j = 0; j < cols; ++j) {
            // Assuming each row in list_of_passengers represents a different passenger
            char seatStatus = ' ';
            if (j < seats.size()) {
                seatStatus = (seats[i][j].get_status() ? 'X' : ' ');
            }
            std::cout << " | " << seatStatus << " ";
        }
        std::cout << "|" << std::endl;
    }

    std::cout << "  +---+---+---+---+---+---+---+" << std::endl;
}

void flight::display_passInfo(){
    std::cout << "First Name        Last Name        Phone          Seat       ID" << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;

    for (int i = 0; i < pList.size(); i++) {
        std::cout << pList[i].get_fname() << "    "
                  << pList[i].get_lname() << "    "
                  << pList[i].get_p_num() << "    "
                  << pList[i].get_seat() << "    "
                  << pList[i].get_passengerID() << std::endl;
    }
}
