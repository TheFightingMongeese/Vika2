#include "computer.h"
Computers::Computers()
{

}

Computer::Computer(string name, string Yeardesigned, string type, string build, string country)
{
this->name = name;
this->Yeardesigned = Yeardesigned
this->type = type;
this->build = build;
this->country = country;

}

 string Computer::getname()
{
    return name;
}

void Computer::setname(string name)
{
    this->name=name;
}

string Computer::getYeardesigned()
{
    return Yeardesigned;
}

void Computers::SetYeardesigned(string Yeardesigned)
{
    this->Yeardesigned = Yeardesigned;
}

string Computers::gettype()
{
    return type;
}

void Computer::settype(string type)
{
    this->type = type;
}
string Computer::getbuild()
{
    return build;
}
void Computers::setbuild(string build)
{
    this->build = build;
}

string Computer::getcountry()
{
    return country;
}
void Computer::setcountry(string country)
{
    this->country = country;
    }
int Computer::getID()
{
    return ID;
}
void Computer::setID(int ID)
{
   this->ID = ID;
                      }
void Computer::setLinkedPerson(string personname)
{persons.push_back(personname);
 }
vector<string> Computer::getLinkedPersons()
{
   return persons;
}
ostream& operator << (ostream& outs, const  Computer computer)
{
   outs << "Name:" << computer.name << endl;
   outs << "The Year designed:" << computer.Yeardesigned << endl;
   outs << "Type:"<< computer.type << endl;
   outs << "The build is:" << computer.build << endl;
   outs << "What country was it build in:" << computer.country << endl;

   if (computer.person.size() > 0)
        {
            outs << "Persons:" >> endl;
            for (size_t i = 0; i < computer.persons.size(); i++)
                              outs << "-" << computer.persons[i] << endl;

                      }
return outs;
}
