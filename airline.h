#ifndef AIRLINE
#define AIRLINE


#include <string> 
#include <iostream>
#include <string>
#include <vector>
#include "FlightClass.h"


class Airline{
    private: 
        char airline_name[3];
        vector <flight*> listofflights;
        int numFlights; 
    
    public:
        Airline();
        // Airline(string airline_name, vector<flight> listofflights, int numFlights);
        Airline(Airline&source);
        ~Airline();
        // Airline& operator=(const Airline&RHS);
        //ctor, assignment operator, dtor.

        const char* get_name() const;
        vector <flight*> get_list() const;
        int get_number() const;
        //getters.

        void set_name(char name[3]);
        void set_list(flight&F);
        void set_num(int num);
        //setters.

        void display_seatMap();
        void display_passInfo();
        void addPassenger();
        void RemovePass();
};

#endif
