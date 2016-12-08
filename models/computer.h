
#define computers
#include iostream
#include <string>
#include <vector>
using namespace std;

class computers
{
public:

    enum Field { Name, Yeardesigned, type, build, country };

    computers();
    computers(string Name, string Yeardesigned, string type, string build, string country);
    string getName();
    void setname(string name);
    string getYeardesigned();
    void setYeardesigned(string Yeardesigned);
    string gettype();
    void settype(sting type);
    string getbuild();
    void setbuild(string, build);
    string getcountry();
    void setcountry(string, country);
    int getID();
    void setID(int ID);
    void setLinkedPerson(string personName);
    vector<string> getLinkedpersons();
    friend ostream& operator << (ostream&outs, const Computer computer);

private:

    string name;
    string Yeardesigned;
    string type;
    string build;
    string country;
    int ID;
    vector<string> persons;


};

#endif // COMPUTERS_H
