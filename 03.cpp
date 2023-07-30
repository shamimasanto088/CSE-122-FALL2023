#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b&&a>c)
    {
        cout<<"a is large number"<<a <<endl;

    }
    else if (b>a&&b>c)
    {
        cout<<"b is large number"<<b <<endl;

    }
    else if (c>a&&c>b)
    {
        cout<<"c is large number"<<c <<endl;
    }
    return 0;


        }
