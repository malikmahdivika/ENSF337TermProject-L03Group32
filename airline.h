#ifndef AIRLINE
#define AIRLINE

#include <iostream>
#include <string>
#include <vector>
#include "FlightClass.h"
using namespace std;

class Airline;

class Airline{
    private: 
        char airline_name[3];
        vector <flight*> listofflights;
        int numFlights; 
    
    public:
        Airline();
        Airline(Airline&source);
        ~Airline();
        //ctor, assignment operator, dtor.

        const char* get_name() const;
        vector <flight*> get_list() const;
        int get_number() const;
        //getters.

        void set_name(char name[3]);
        void set_list(flight*F);
        void set_num(int num);
        //setters.

        void display_seatMap();
        void display_passInfo();
        void addPassenger();
        void RemovePass();
        void saveData();
        //other required functions.
};

#endif
