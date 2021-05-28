#include <iostream>
using namespace std;

class employee
{
private:
    int p1,p2,p3;
public:
    int pu1,pu2;

    void setData(int a,int b,int c);
    void getData()
    {
        cout<<p1<<endl;
        cout<<p2<<endl;
        cout<<p3<<endl;
        cout<<pu1<<endl;
        cout<<pu2<<endl;
    }
};

//in the above employee class, p1,p2 & p3 is private modifires
//we only can access the variable with another function
//here the function is declared;
void employee::setData(int a, int b, int c) {
    //here :: is called scope resulation
    p1=a;
    p2=b;
    p3=c;
}

int main() {

    employee a;
    //setting the private variable with another function
    a.setData(1,2,3);

    //assigning the public variable
    a.pu2=66;
    a.pu1=55;
    a.getData();

    return 0;
}
