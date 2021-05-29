#include <iostream>
#include <string>
using namespace std;

class binary
{
private:    //that's a private modifire
    string s;
    bool flag=1;
public:
    void read(void);
    void chk_bin(void);
};
void binary :: read(void)
{
    cout<<"Enter a binary number: ";
    cin>>s;
}
void binary ::chk_bin(void)
{
    if(s.at(0)=='-')
        exit(0);
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {

            flag=0;
            break;
        }

    }

    if(flag) cout<<"Yes it's a binary number."<<endl;
    else if(!flag) cout<<"No it's not a binary number"<<endl;
    flag=1;

}

int main()
{
    binary bin;
    while(1)
    {
        bin.read();
        bin.chk_bin();
    }

    return 0;
}
