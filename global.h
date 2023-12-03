#ifndef GLOBAL
#define GLOBAL

#include "airline.h"

void menu();
void header();
void save_data();
void populate(Airline&A);
void add_pass(const flight &F);
void remove_pass(const flight &F, int pass_ID);

#endif