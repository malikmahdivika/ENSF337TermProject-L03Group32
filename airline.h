#include <string> 
#include <iostream>
#include <string>
#include <vector>
#include "FlightClass.h"
#include "FlightClass.cpp"


#ifndef Airline
#define Airline

class Airline{
    private: 
        char airline_name[3];
        vector <flight*> listofflights;
        int numFlights;
    
    public:
        Airline();
        Airline(string airline_name, vector<flight*> listofflights, int numFlights)
        Airline(Airline&source);
        ~Airline();
        Airline& operator(const Airline&RHS);
        //ctor, assignment operator, dtor.

        string get_name() const;
        vector <flight> get_list() const;
        int get_number() const;
        //getters.

        void set_name(string name);
        void set_list(flight&F);
        void set_num(int num);
        //setters.
}
#endif; 
