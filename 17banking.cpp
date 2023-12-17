#include<iostream>
#include<iomanip>
using namespace std;
void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    cout<<"*******************************ATM MACHINE***************************\n";


    double balance=0;
    int choice=0;
    do{

    cout<<"**********************\n";
    cout<<"enter your choice\n";
    cout<<"**********************\n";
    cout<<"1. show balance \n";
    cout<<"2. deposit money\n";
    cout<<"3. withdraw money\n ";
    cout<<"4. exit\n";
    cin>>choice;
    cin.clear();
    fflush(stdin);
    switch(choice){
        case 1:showbalance(balance);
               break;
        case 2:balance+=deposit();
               showbalance(balance);
               break;
        case 3:balance-=withdraw(balance);
               showbalance(balance);
               break;
        case 4:cout<<"thanku for visiting\n";
               break;
        default:cout<<"invalid coice\n";
    }
    }
while(choice != 4);
return 0;
}


void showbalance(double balance)
{
    cout<<"your balance is $:"<<setprecision(2)<<fixed <<balance<<endl;
 
}


double deposit()
{
    double amount=0;
    cout<<"enter amount to be deposited:"<<endl;
    cin>>amount;
    if(amount>0){
       return amount;  
    }
    else{
        cout<<"that's not avalid amount;\n";
        return 0;
    }
}


double withdraw(double balance)
{
    double amount=0;

    cout<<"enter the amount you want to withdraw:\n";
    cin>>amount;
    if(amount>balance){
        cout<<"insufficient fund\n";
        return 0;
    }
    else if(amount<0){
        cout<<"that's not a valid amount;\n";
        return 0;
    }
    else{
        return amount;
    }
}

