#ifndef SEAT
#define SEAT

#include "passenger.h"


class seat {
    private:
        int rownum;
        char column;
        bool seat_status;
        Passenger* pass;
        int passengerID;   
    public:
        void set_rownum(int rnum);
        void set_column(char col);
        void set_status(bool status);
        void set_passenger(Passenger*P);

        int get_rownum();
        char get_column();
        bool get_status();
        int get_passID();

        seat(int row, char col, bool status);
        seat();

        void removePassenger();
};

#endif