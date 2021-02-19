#include <iostream>
using namespace std;

//BS = Base Salary
//otHours = Overtime hours spent by the employee
//otSalary = The payment for the employee's overtime hours

int main(){
    float BS, otHours, otSalary;

    cout<<"Please input the salary at the beginning :";
    cin>>BS;

    cout<<"Please input the overtime hours :";
    cin>>otHours;

    if (BS>=3000000){
        if (otHours<10){
            otSalary=otHours*100000;
            BS=BS+otSalary;
        }
        else if (otHours<=20){
            otSalary=otHours*125000;
            BS=BS+otSalary;
        }
        else if(otHours>20){
            BS=BS+2500000;
        }
    }
    cout<<"The total salary of this month is:" <<BS<< endl;

    return 0;
}