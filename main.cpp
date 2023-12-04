#include "global.h"
#include <iostream>
using namespace std; 



int main(void){
    
    Airline A;

    header(); 
    populate("flight_info.txt", A);

    int selection = 0; 

    while(selection != 6){
        selection = 0;
        menu();
        
        if (!(cin >> selection)){
            // Clear the error state
            cin.clear();
            
            // Discard invalid input
            cin.ignore();
            
            cout << "Invalid Input. Please Enter a Valid integer." << endl;
            continue; // Skip the rest of the loop and start over
        }

        switch(selection){
            case 1:
                A.display_seatMap();
                break;
            case 2:
                A.display_passInfo();
                break;
            case 3:
                A.addPassenger(); 
                break;
            case 4:
                A.RemovePass();
                break;
            case 5:
                A.saveData(); 
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }
}
  













 // seat pass_seat; 
        // pass_seat.set_rownum(temp_row_int); 
        // pass_seat.set_column(temp_col_int);
        // pass_seat.set_status(true); 

        // F->seats.at(pass_row).at(pass_col) = ; 
        // P->passenger_seat = &(F.seats.at(temp_seatrow).at(temp_seatcol)); 




// void save_data(){

// }




// DO THIS IN PASSENGER CLASS!!!!!!!!!!!!! void display_pass();
// DO THIS IS FLIGT CLASS!!!!!!!!!!!!!!!! void new_pass(); void remove_pass();


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
    // vector <string> temp_passlist;

    //create empty seatmap matrix
    //pointer to seatmap matrix

    //creates new airline, flights, passenger & assigns seat.
 
    // airline New_airline;
    // New_airline.set_airline_name(temp_name);

    // flight new_flight(temp_FlightID, temp_rows, temp_cols,temp_passlist /*,pointer to seatmap*/);
    // passenger new_passenger(temp_fname, temp_lname, temp_pnum, temp_passID /*,passenger seat*/);
   
    
    // new_flight.set_passenger_list({new_passenger})
    // New_airline.set_list({new_flight});

    
        // airline New_airline(temp_name, {flight new_flight;}, temp_rows, temp_cols);

        // New_airline.at(listofflights[0]).seatrow.set(temp_rows);
        // New_airline.at(listofflights[0]).seats_per_row.set(temp_cols);
        // New_airline.at(listofflights[0]).pList.set(passenger new_passenger;);

        // New_airline.at(listofflights[0]).at(new_passenger).fname.set(temp_fname;);
        // New_airline.at(listofflights[0]).at(new_passenger).lname.set(temp_lname;);   
        // New_airline.at(listofflights[0]).at(new_passenger).phone_num.set(temp_pnum;);
        // New_airline.at(listofflights[0]).at(new_passenger).passengerID.set(temp_passID;);
        // New_airline.at(listofflights[0]).at(new_passenger).passenger_seat.set(new seat(temp_pass_rnum, temp_pass_col, 1););

    






