#include "global.h"


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

    cout<< "<<< Press Return to Continue >>>";
}

void populate(Airline&A){
    
    ifstream in_file;

   in_file.open("flight_info.txt");

   if(in_file.fail()){
    cout << "Error Opening File!";
    exit(1);
   }

    flight *F = new flight;

    char temp_line[100];
    in_file.getline(temp_line,100,'\n');



    char temp_name[3];
    temp_name[0] = temp_line[0];
    temp_name[1] = temp_line[1];
    temp_name[2] = '\0';

    A.set_name(temp_name);

    char temp_num[7];
    for(int i = 2; i<9; i++){
        temp_num[i-2] = temp_line[i];
    }
    temp_num[5] = '\0';
    

    char rows[6];
    for(int i=9; i < 15; i++){
        rows[i-9] = temp_line[i];
    }
    rows[3] = '/0';


    char cols[1];
    for(int i=9; i < 15; i++){
        cols[i-9] = temp_line[i];
    }
    cols[2] = '/0';


    F->set_flightID(temp_num);
    F->set_rows(atoi(rows));
    F->set_cols(atoi(cols));

    while(!in_file.eof()){

        Passenger* P = new Passenger;

        temp_line[100];
        in_file.getline(temp_line, 100, '\n');

        char temp_first[20];
        for(int i = 0; i < 22; i++){
            temp_first[i] = temp_line[i];
        }

        char temp_last[20];
        for(int i = 22; i < 42; i++){
            temp_last[i-22] = temp_line[i];
        }


        char temp_phone[20];
        for(int i = 41 ; i < 61; i++){
            temp_phone[i-41] = temp_line[i];
        }


        char temp_seat[4];
        for(int i = 61 ; i < 64; i++){
            temp_seat[i-61] = temp_line[i];
        }
        temp_seat[3] = '\0';

        char temp_ID[5];
        for(int i = 65 ; i < 71; i++){
            temp_ID[i-41] = temp_line[i];
        }

        int pass_row;
        int pass_col;

        if(isdigit(temp_seat[1])){
            pass_row = (temp_seat[0] - '0' *10) + (temp_seat[1]) - '0';
            pass_col = tolower(temp_seat[2]) - 'a' + 1;
        }
        else if(isalpha(temp_seat[1])){
            pass_row = temp_seat[0] - '0';
            pass_col = tolower(temp_seat[1]) - 'a' + 1;
        }

        //convert ID to integer. 
        int int_ID = 0;
        int i = 0;
        while (temp_ID[i] != '\0') {
            int_ID = int_ID * 10 + (temp_ID[i] - '0');
            i++;
        }


        P->set_fname(temp_first);
        P->set_lname(temp_last);
        P->set_p_num(temp_phone);
        P->set_ID(int_ID);
        P->set_seat(temp_seat);

        //iterate through matrix of seats and add/create pointer to point to a passenger from the seat where the passengers designated seat is.   
        F->SeatAssign(pass_row, pass_col, P);
        
    }

    A.set_list(*F); 
    in_file.close();

}  

