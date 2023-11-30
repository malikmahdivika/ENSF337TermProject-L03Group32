#include <string> 
#include <iostream>
#include <string>
#include <vector>
#include "SeatClass.h"

#ifndef Passenger
#define Passenger

class Passenger{
    private:
        string fname;
        string lname;
        string phone_num;
        int passengerID;
        seat*passenger_seat;
    
    public:
        string get_fname();
        string get_lname();
        string get_p_num();
        int get_passengerID();
        //getters

        void set_fname(string fname);
        void set_lname(string fname);
        void set_p_num(string p_num);
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