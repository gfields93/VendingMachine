#include "Data.h"

double Data::value = 0;
Data::States Data::currentState = Data::state1;
Data::States Data::prevState = Data::state1;

void Data::setValue(double x) {value = x;}
double Data::getValue() {return value;}
void Data::setCurrentState(Data::States x) {currentState = x;}
void Data::setPrevState(Data::States x) {prevState = x;}
Data::States Data::getCurrentState() {return currentState;}
Data::States Data::getPrevState() {return prevState;}

