#include "FlightClass.h"
#include <iostream>

//getters
const char* flight::get_flightID()const {return flightID;}
int flight::get_rows()const {return rows;}
int flight::get_cols()const {return cols;}

//setters
void flight::set_flightID(char id[7]){
    flightID[0] = id[0];
    flightID[1] = id[1];
    flightID[2] = id[2];
    flightID[3] = id[3];
    flightID[4] = id[4];
    flightID[5] = id[5];
    flightID[6] = '\0';
}

void flight::set_rows(int rows){
    this->rows = rows;
}

void flight::set_cols(int cols){
    this->cols = cols; 
}


//ctors, dtors
flight::flight(){
    flightID[0] = '\0';
    rows = 0;
    cols = 0;
}

flight::~flight(){
    for (int i = 0; i < rows; i++){
        for (int k = 0; k <= cols; k++){
            seats[i][k].~seat();
        }
    }
    seats.clear();
}

//other required functions
void flight::SeatAssign(int row, int col, Passenger*P){
        if(seats.at(row).at(col).get_status() == true){
            cout << "This Seat is Already Taken!";
            delete P;
            return;
        }
        seats.at(row).at(col).seatAssign(P);
}

void flight::RemovePass(int ID){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= cols; j++){
            if(seats[i][j].get_passID() == ID){
                seats[i][j].removePassenger();
            }
        }
    }
}

void flight::seat_list()
{
    seats.resize(rows+1);

    for (int i = 0; i <= rows; i++)
    {
        seats[i].resize(cols+1);

        for (int j = 0; j <= cols; j++)
        {
            seat newSeat;
            newSeat.set_rownum(i);  
            newSeat.set_column(j); 
            newSeat.set_status(false); 

            seats[i][j] = newSeat;
        }
    }
}

 

void flight::display_seatMap(){
    cout << endl;
    cout << "      Aircraft Seat Map" << endl;
    cout << "      ";
    for (int i = 1; i <= cols; i++)
    {
        cout << char(i + 64) << "   ";
    }
    cout << endl;
    for (int i = 1; i <= rows; i++)
    {
        cout << "    +";
        for (int j = 0; j < cols; j++)
        {
            cout << "---+";
        }
        cout << endl;

        if (i < 10)
        {
            cout << " " << i << "  |";
        }
        else if (i >= 10)
        {
            cout << " " << i<< " |";
        }

        for (int j = 1; j <= cols; j++)
        {
            if (seats[i][j].get_status() == false)
            {
                cout << "   |";
            }
            else
            {
                cout << " X |";
            }
        }
        cout << endl;
    }
    cout << "    +";
    for (int j = 1; j <= cols; j++)
    {
        cout << "---+";
    }
    cout << endl << endl; 
}

void flight::display_passInfo(){
    cout << endl;
    cout << "First Name          Last Name           Phone               Seat   ID" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
           seat *s = &seats[i][j];
           s->displayPassenger();
        }
    }
}

void flight::saveData(ofstream&out_file){
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
           seat *s = &seats[i][j];
           s->saveData(out_file);
        }
    }
}
