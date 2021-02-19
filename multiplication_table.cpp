//Name : Finannisa Zhafira
//Class : IUP A2
//NIM : 19/440447/PA/19077

#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"*\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10"<<endl;

    for (a=1; a<=10; a++)
    {
        cout<<a<<"\t";

        for (b=1; b<=10;b++)
        {
            cout<<a*b<<"\t";
        }

        cout<<endl;
    }

    return 0;
}