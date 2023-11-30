#include "airline.h"
#include "passenger.h"
#include "FlightClass.h"
#include "airline.cpp"
#include "passenger.cpp"
#include "FlightClass.cpp"
#include <fstream>
#include <stirng>
#include <iostrem>
#include <vector>
#include <cstdlib>
using namespace std 


void menu();
void header();
void save_data();
void read(string filename, airline&A,flight&F);
void display_seatmap();
void display_passengerInfo();

int main(void){
    
    airline A;
    flight F;
    A.get_list[0] 

    read();
    header();
    int selection = 1;
    char continued;
    cin >> continued;

    if(continued = '\n'){
        while (selection != 6){
            menu();
            cin >> selection;

            switch(selection){
                case 1:
                    //display seat map

                case 2: 
                    //display passenger info
                
                case 3:
                    //add passenger

                case 4: 
                    //remove passenger

                case 5:
                    save_data();
            }
        exit(1);
        }
    }
    
    return 0;
}

void menu(){
    cout << "Please select one of the Following:" << endl;
    cout << "1: Display Flight Seat Map" << endl;
    cout << "2: Display Passenger Information" << endl;
    cout << "3: Add New Passenger" << endl;
    cout << "4: Remove Exisitng Passenger" << endl;
    cout << "5: Save Data" << endl;
    cout << "6: Quit" << endl;
}

void header(){
    cout << "Version: 1.0" << endl;
    cout << "Term Project - Flight Managment Program in C++" << endl;
    cout << "Produced by Alex Whelan & Malik Mahdivika" << endl;
    cout << "Year: 2023" << endl;

    cout<< "<<< Press Return to Continue >>>"
}

void read(string filename, airline&A, fligt&F){
    ifstream in_file;

   infile.open("flight_info.txr");

   if(in_file.fail()){
    cout << "Error Opening File!"
    exit(1);
   }

    char temp_name[3];

    in_file.get(temp_name, 3, '\n');
    A.set_name(temp_name);

    
    char temp_num[7];
    int rows[6];
    int cols[1];

    infile.get(temp_num, 8, '\n');
    infile.get(rows, 3, '\n');
    infile.get(cols, 10. '\n')

    F.set_flightID(temp_num);
    F.set_rows(atoi(rows));
    F.set_cols(atoit(cols));

    while(!infile.eof()){
        char temp_first[20];
        char temp_last[20];
        char temp_phone[20];
        char temp_ID[5];
        char temp_seat[4];

        infile.get(temp_first, 20, '\n');
        infile.get(temp_last, 20, '\n');
        infile.get(temp_phone, 20, '\n')l;
        infile.get(temp_ID, 5, '\n');
        infile.get(temp_seat, 4, '\n');

        Passenger* P = new Passenger;
        P->set_fname(temp_first);
        P->set_lname(temp_last);
        P->set_p_num(temp_phone);
        
        //convert ID to integer.
        int result = 0;
        int i = 0;

        while (tempID[i] != '\0') {
            result = result * 10 + (charArray[i] - '0');
            i++;
        }

        P->set_ID(result);
        P->set_seat(temp_seat);

        F.addPassenger(P);
        
    }






    A.set_list(F);


    
    infile.close();

}
   
   

   
    //read file, name of airline into temp. variable
        // string temp_name;
        // int temp_rows;
        // int temp_cols;
        // string temp_FlightID;
        // string temp_fname;
        // string temp_lname;
        // string temp_pnum;
        // int temp_passID;
        // int temp_pass_rnum;
        // char temp_pass_col;

    //iterate through file and make vector of all passengers names
    vector <string> temp_passlist;

    //create empty seatmap matrix
    //pointer to seatmap matrix

    //creates new airline, flights, passenger & assigns seat.
 
    airline New_airline;
    New_airline.set_airline_name(temp_name);

    flight new_flight(temp_FlightID, temp_rows, temp_cols,temp_passlist /*,pointer to seatmap*/);
    passenger new_passenger(temp_fname, temp_lname, temp_pnum, temp_passID /*,passenger seat*/);
   
    
    new_flight.set_passenger_list({new_passenger})
    New_airline.set_list({new_flight});


        
        
        
        
        
        
        
        // airline New_airline(temp_name, {flight new_flight;}, temp_rows, temp_cols);

        // New_airline.at(listofflights[0]).seatrow.set(temp_rows);
        // New_airline.at(listofflights[0]).seats_per_row.set(temp_cols);
        // New_airline.at(listofflights[0]).pList.set(passenger new_passenger;);

        // New_airline.at(listofflights[0]).at(new_passenger).fname.set(temp_fname;);
        // New_airline.at(listofflights[0]).at(new_passenger).lname.set(temp_lname;);   
        // New_airline.at(listofflights[0]).at(new_passenger).phone_num.set(temp_pnum;);
        // New_airline.at(listofflights[0]).at(new_passenger).passengerID.set(temp_passID;);
        // New_airline.at(listofflights[0]).at(new_passenger).passenger_seat.set(new seat(temp_pass_rnum, temp_pass_col, 1););

    

void save_data(){

}

// DO THIS IN PASSENGER CLASS!!!!!!!!!!!!! void display_pass();
// DO THIS IS FLIGT CLASS!!!!!!!!!!!!!!!! void new_pass(); void remove_pass();








