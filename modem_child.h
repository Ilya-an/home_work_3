#ifndef MODEM_CHILD_H
#define MODEM_CHILD_H

#include <iostream>
#include <string>

using namespace std;

class Modem_child
{
    public:
        string manufacturer;
        Modem_child();
        Modem_child(const string manufacturer);
        void setManufacturer( const string manufacturer);
        string getManufacturer() const {return manufacturer;}

    Modem_child& operator=(const Modem_child& rhs);

    protected:

    private:
};

#endif // MODEM_CHILD_H
