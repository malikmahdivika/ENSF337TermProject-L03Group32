#include <iostream>
#include <string>
using namespace std;

void display_menu(string section) {
    int choice;
    if (section == 'main') {}
        cout << 'Version 1.0\nTerm Project - Flight Management Program in C++' << endl;
        cout << 'Produced by: Al Malik Mahdivika and Alex Whelan' << endl;

        cout<< '<< Press Return to Continue >>' << endl
    } else if (section == 'flight') {
        cout << 'Please select one of the following options:' << endl;
        cout << '1. Display the Flight Seat Map.\n2. Display Passenger Information.\n3. Add a new Passenger.' << endl;
        cout << '4. Remove existing Passenger\n5. Save Data\n6. Quit.' << endl;
    }

}

void display_seat_map() {

}

void display_pinfo() {

}

void add_pass() {

}

void del_pass() {

}

void save_data() {

}

void quit() {exit(1);}

//test block
void main() {
    display_menu('main');
}