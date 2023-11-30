#include <string> 
#include <iostream>
#include <string>
#include <vector>
#include "SeatClass.h"

#ifndef Passenger
#define Passenger

class Passenger{
    private:
        char fname[20];
        char lname[20];
        char phone_num[20];
        int passengerID;
        char pass_seat[4];
        seat*passenger_seat;
    
    public:
        string get_fname();
        string get_lname();
        string get_p_num();
        int get_passengerID();
        //getters

        void set_fname(char fname[20]);
        void set_lname(char fname[2]);
        void set_p_num(char p_num[20]);
        void set_ID(int passengerID);
        void set_seat(int row, char collumn);
        //setters

        Passenger();
        Passenger(string fname, string lname, string phone_num, int passengerID, string*passenger_seat);
        ~Passenger();
        Passenger(Passenger& source);
        Passenger& operator(Passenger&RHS);
        //ctors,assignment operators, dtor.
}

#endif