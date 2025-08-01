#include<iostream>
using namespace std;

class ATM{
    private:
    int balance;
    public:
    ATM(int bal){
        balance = bal;
    }
    int gtbalance(){
        return balance;
    }
    int withdraw(int amount){   
        if(amount > balance){
            return  false;
        }
        balance = balance - amount;
        return true;
    }
    void deposit(int amount){
        balance = balance + amount;
    }
};
int main(){
    ATM atm(1000);
    int choice, amount, success;    
    char op;  

    do{
        system("cls");
        cout<<"Welcome to AMIT ATM Machine"<<endl;
        cout<<"--------------------------------"<<endl;
        cout<<"1. view balance"<<endl;
        cout<<"2. cash withdraw"<<endl;
        cout<<"3. cash deposit"<<endl;
        cout<<"4. exit"<<endl;
        cout<<"Enter Your Choice :";
        cin>>choice;

    switch(choice){
        case 1:
        cout<<"your balance is :"<<atm.gtbalance();
        break;

        case 2:
        cout<<"Your Available balance is :"<<atm.gtbalance()<<endl;
        cout<<"\nEnter the amount to withdraw :";
        cin>>amount;
        success = atm.withdraw(amount);
        if(success){
            cout<<"withdraw successful....."<<endl;
        }
        else{
            cout<<"Insufficient balance......."<<endl;
        }
        break;

        case 3:
            cout<<"Enter the amount to deposit :";
            cin>>amount;
            atm.deposit(amount);
            cout<<"deposit successful....."<<endl;
            break;

        case 4: 
            cout<<"\n\t-- THANKS FOR USING AMIT ATM MACHINE --"<<endl;
            break;

        default:
            cout<<"Invalid choice, please try again."<<endl;
            break;
    }
        cout<<"\nDo you want to try another transaction [Yes / No] :";
        cin>>op;
 }while(op =='y' || op == 'Y' );

}

