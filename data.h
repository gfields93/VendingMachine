#ifndef DATA_H
#define DATA_H

#include <QString>
#include <vector>
class Data
{

public:
    Data() {}
    enum States {state1,state2,state3,state4,state5,state6,state7,state8,state9};
    static void setValue(double);
    static double getValue();
    static void setCurrentState(Data::States);
    static Data::States getCurrentState();
    static Data::States getPrevState();
    static void setPrevState(Data::States);

private:
    static double value;
    static States currentState;
    static States prevState;
};
#endif // DATA_H
