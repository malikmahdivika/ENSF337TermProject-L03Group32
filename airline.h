#include <string> 
#include <iostream>
#include <string>
#include <vector>
#include "FlightClass.cpp"

#ifndef Airline
#define Airline

class Airline{
    private: 
        string airline_name;
        vector <flight> listofflights;
        int numFlights;
    
    public:
        Airline();
        Airline(string airline_name, vector<flight> listofflights, int numFlights)
        Airline(Airline&source);
        ~Airline();
        Airline& operator(const Airline&RHS);
        //ctor, assignment operator, dtor.

        string get_name();
        vector <int> get_list();
        int get_number();
        //getters.

        void set_name(string name);
        void set_list(vector <string> list);
        void set_num(int num);
        //setters.
}
#endif; 
