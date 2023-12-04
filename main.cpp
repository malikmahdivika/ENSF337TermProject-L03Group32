#include "global.h"
#include <iostream>
using namespace std; 



int main(void){
    
    Airline A;

    header(); 
    populate("flight_info.txt", A);

    int selection = 0; 
    int continue1 = 0;

    cin >> continue1;

    if(continue1 == 1){

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
                    exit(1);
                default:
                    cout << "Invalid choice." << endl;
                    break;
            }
        }
    }
    else{
        exit(1);
    }
}