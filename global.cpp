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
    cout<<endl;

    cout<< "<<< Enter '1' to Continue >>>" << endl;
    cout << endl;
    
}

void populate(string sourceFile, Airline&A){
    
    ifstream in_file;

    in_file.open("flight_info.txt");

    if(!in_file.is_open()){
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
    for(int i = 9; i < 15; i++){
        rows[i-9] = temp_line[i];
    }
    rows[5] = '\0';


    char cols[2];
    for(int i = 15; i < 16; i++){
        cols[i-15] = temp_line[i];
    }
    cols[1] = '\0';
     

    F->set_flightID(temp_num);
    F->set_rows(atoi(rows));
    F->set_cols(atoi(cols));

    F->seat_list();

    while(!in_file.eof()){


        Passenger* P = new Passenger;
        char * ptr;


        char templine[100];
        in_file.getline(templine, 100, '\n');
        ptr = templine;


        if(strlen(templine) < 15 ){
            break;
        }


        char temp_first[20];
        for(int i = 0; i < 19; i++, ptr++){
            temp_first[i] = *ptr;
        }
        ptr++;
        temp_first[19] = '\0';


        P->set_fname(temp_first);

        char temp_last[20];
        for(int i = 0; i < 19; i++, ptr++){
            temp_last[i] = *ptr;
        }
        ptr++;
        temp_last[19] = '\0';

        P->set_lname(temp_last);


        char temp_phone[20];
        for(int i = 0 ; i < 19; i++, ptr++){
            temp_phone[i] = *ptr;
        }
        ptr++;
        temp_phone[19] = '\0';

        P->set_p_num(temp_phone);
        

        char temp_seat[4];
        for(int i = 0 ; i < 3; i++, ptr++){
            temp_seat[i] = *ptr;
        }
        ptr++;
        temp_seat[3] = '\0';

        P->set_seat(temp_seat);

        int pass_row;
        int pass_col;

        if(isdigit(temp_seat[1])){
            pass_row = (temp_seat[0] - '0')*10 + (temp_seat[1] - '0');
            pass_col = toupper(temp_seat[2]) - 'A' + 1;
        }
        else if(isalpha(temp_seat[1])){
            pass_row = (temp_seat[0] - '0');
            pass_col = toupper(temp_seat[1]) - 'A' + 1;
        }

        char temp_ID[6];
        for(int i = 0 ; i < 6; i++, ptr++){
            temp_ID[i] = *ptr;
        }
        ptr++;
        temp_ID[5] = '\0';


        //convert ID to integer. 
        int int_ID = 0;
        int i = 0;
        while (temp_ID[i] != '\0') {
            int_ID = int_ID * 10 + (temp_ID[i] - '0');
            i++;
        }
        P->set_ID(int_ID);

        F->SeatAssign(pass_row, pass_col, P); 
        
    }
    A.set_list(F); 
    in_file.close();
}  

