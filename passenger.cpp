#include "passenger.h"

const char* Passenger::get_fname()const{return fname;}
const char* Passenger::get_lname()const{return lname;}
const char* Passenger::get_p_num()const{return phone_num;}
int Passenger::get_passengerID()const{return passengerID;}
//getters

void Passenger::set_fname(char fname[20]){
    strcpy(this->fname, fname);
}
void Passenger::set_lname(char lname[20]){
    strcpy(this->lname, lname);
}
void Passenger::set_p_num(char p_num[20]){
     strcpy(this->phone_num, p_num);
}
void Passenger::set_ID(int ID){
   this->passengerID = ID;
}
void Passenger::set_seat(char seat[4]){
    strcpy(pass_seat, seat);
}
//setters

Passenger::Passenger(){
    fname[0] = '\0';
    lname[0] = '\0';
    phone_num[0] = '\0';
    passengerID = 0;
    pass_seat[0] = '\0';
}

const char* Passenger::get_seat()const {
    return pass_seat;
}

Passenger::~Passenger(){
    //dtor 
}


void Passenger::displayPassenger(){
    const char *first = get_fname();
    for (int i = 0; i < 20; i++, first++)
        cout << *first;
    cout << " ";
    const char *last = get_lname();
    for (int i = 0; i < 20; i++, last++)
        cout << *last;
    cout << " ";
    const char *phone = get_p_num();
    for (int i = 0; i < 20; i++, phone++)
        cout << *phone;
    cout << " ";
    const char *seat = get_seat();
    for (int i = 0; i < 4; i++, seat++)
        cout << *seat;
    int id = get_passengerID();
    cout << "   " << id << endl;
    cout << "---------------------------------------------------------------------------" << endl;

}

void Passenger::saveData(ofstream&out_file){
    out_file << fname << " " << lname << " " << phone_num << " " << pass_seat << " " << passengerID << endl;
}
