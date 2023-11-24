class seat {
    private:
        int rownum;
        char column;
        bool seat_status;
    public:
        void set_rownum(int rnum);
        void set_column(char col);
        void set_status(bool status);

        int get_rownum();
        char get_column();
        bool get_status();

        seat(int row, char col, bool status);
}