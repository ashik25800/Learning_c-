#include<bits/stdc++.h>
using namespace std;

class encapsulation
{
private:
    string name;
    int id;
    bool gender;

public: //encapsulation can hide data part or methods part.
// but data hiding tecnique can hide only the data members.
    void set(string name,int id,bool gender) // setting private member's values with methods
    {
        this->name = name;
        this->id = id;
        this->gender = gender;
    }

    string getname() // private member returning whith this method
    {
        return name;
    }

    int getid()
    {
        return id;
    }
    bool getgender()
    {
        return gender;
    }

};


int main()
{
    encapsulation a;
    a.set("Ashik",12,true);

    cout<<a.getname()<<endl;
    cout<<a.getid()<<endl;
    cout<<a.getgender()<<endl;


    return 0;
}
