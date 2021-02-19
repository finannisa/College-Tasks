#include <iostream>
using namespace std;

int main(){
    //L : the loan amount, I : interest rate per year, MP : monthly payment, MI : monthly interest, PP : pay towards the principal, PL : loan payment per month, T : how many months the loan will be paid//

    float L, I, MP, MI, PP, PL, T;
    T = 0;

    cout<<"Please input your loan amount:";
    cin>>L;

    cout<<"Please input the annual interest rate in percentage:";
    cin>>I;

    cout<<"Please input your monthly payment:";
    cin>>MP;

    MI = I/(12*100);
    
    while(L>0){
        PP = L*MI;
        PL = MP-PP;

        if (T==0){
            if (MP <= PP){
                cout << "WARNING! your monthly payment is too low, the loan amount can not be repaid" << endl;
                return 0;
            }
        }
        L -= PL;
        T++;
    }
    cout<<"The amount of months it would take to repaid the loan will be :" <<T<< "months" << endl;
}