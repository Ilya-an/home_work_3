#include "modem_child.h"
#include <iostream>
#include <string>

using namespace std;

Modem_child::Modem_child(){}
Modem_child::Modem_child(const string manufacturer)
{
        setManufacturer(manufacturer);
}
void Modem_child:: setManufacturer( const string manufacturer)
{
    this->manufacturer = manufacturer;
}



Modem_child& Modem_child::operator = (const Modem_child& rhs)
{
    if (this == &rhs) return *this;
    return *this;
}
