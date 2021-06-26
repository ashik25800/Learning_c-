#include<iostream>
#include<stdio.h>
#include<algorithm>
#include <string>
#include<list>
#include<map>
#include<utility>


using namespace std;

typedef map<string,int> str_key_map;

int main()
{
    str_key_map a;
    string s;
    int n;

    for(int l=0;l<5;l++)
    {
        cin>>s>>n;
        a[s] = n;
    }

    str_key_map :: iterator i;

    for(i=a.begin();i!=a.end();++i)
        cout<<(*i).first<<" "<<(*i).second<<endl;


}
