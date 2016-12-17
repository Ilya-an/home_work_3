#include "modem.h"
#include <iostream>
#include <string>

using namespace std;

Modem::Modem(): name(0),type(0),price(0),internalisers(0)
{

}

Modem::Modem (const string name, const string type, const interface connector, const string manufacturer, const int price, const bool flag): name(name),type(type),price(price),internalisers(manufacturer)
{
    setName (name);
    setType (type);
    setConn (connector);
    //setManufacturer (manufacturer);
    setPrice (price);
    setBool (flag);
}

/*Modem(const string recNameDisk,
			   const phisicalSize pSize,
			   const mediaType mType,
			   const bool rec);*/
void Modem::setType (const string type)
{
    this->type = type;
}

void Modem::setConn (const interface conn)
{
    connector = conn;
}
void Modem::setName (const string name)
{
    this->name = name;
}

/*void Modem::setManufacturer (const string manufacturer)
{
    this->manufacturer = manufacturer;
}*/

void Modem::setPrice (const int price)
{
    this->price = price;
}
void Modem::setBool (const bool flag)
{//public Object
    internalisers = flag;
}

Modem::~Modem ()
{

}

ostream& operator<<(ostream& stream, const Modem& mod)
{
    stream << "  1. Название модема: " << mod.name << endl;
    stream << "  2. Производитель модема: " << mod.manufacturer << endl;
    stream << "  3. Тип модема: " <<  mod.type << endl;
    stream << "  4. Стоимость модема: " << mod.price << endl;
    string integral = "";
    switch (mod.getBool ())
    {
        case true: integral = "Да"; break;
        case false: integral = "Нет"; break;
    }
    stream << "  5. Встроенный модем: " << integral << endl;
    string Conn = "";
    switch (mod.getConn())
    {
        case 1: Conn = "COM"; break;
        case 2: Conn = "ExpressCard"; break;
        case 3: Conn = "PSI"; break;
        case 4: Conn = "PCMCIA"; break;
        case 5: Conn = "USB"; break;
    }
    stream << "  6. Интерфейс модема: " << Conn << endl;

    return stream;
}

Modem& Modem::operator=(const Modem& rhs)
{
    if (this == &rhs) return *this;
    return *this;
}
