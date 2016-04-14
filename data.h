#ifndef DATA_H
#define DATA_H

class Data
{
public:
    Data() {}
    static void setValue(double);
    static double getValue();

private:
    static double value;
};
#endif // DATA_H
