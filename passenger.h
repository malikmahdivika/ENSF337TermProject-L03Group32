#ifndef PASSENGER
#define PASSENGER

#include <iostream>
#include <string>
#include <vector>
#include "passenger.h" 
#include <fstream>
using namespace std; 

class seat;
class Passenger;

class Passenger{
    private:
        char fname[20];
        char lname[20];
        char phone_num[20];
        int passengerID;
        char pass_seat[4];
        seat*passenger_seat;
    
    public:
        const char*  get_fname() const;
        const char*  get_lname() const;
        const char*  get_p_num() const;
        int get_passengerID() const;
        const char* get_seat_row() const;
        const char* get_seat_col() const;
        const char* get_seat() const ;
        //getters

        void set_fname(char fname[20]);
        void set_lname(char fname[2]);
        void set_p_num(char p_num[20]);
        void set_ID(int passengerID);
        void set_seat(char seat[4]);
        //setters

        Passenger();
        Passenger(string fname, string lname, string phone_num, int passengerID, string*passenger_seat);
        ~Passenger();
        //Passenger(Passenger& source);
        Passenger& operator=(Passenger&RHS);
        //ctors,assignment operators, dtor.

        void displayPassenger();
        void saveData(ofstream&out_file);

};

#endif