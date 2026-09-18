#include<bits/stdc++.h>
using namespace std;

// exception handling...
// an exception is an unexpected problem which occur during the execution of the program and our program suddenly terminates and show some issue/error.


// TRY -> 
// Catch ->
// Throw ->
class invalidamounterror: public runtime_error{
    public:

    invalidamounterror(const string &msg): runtime_error(msg){

    }

};

class insufficientbalance_error:public runtime_error{

    public:
    insufficientbalance_error(const string &msg):runtime_error(msg){
    cout<<"Exception occured"<<endl;
    }
};
class customer{
    string name;
    int balance,account_number;

    public:

    customer(string name, int balance,int account_number){
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;

    }

    // deposit:::

    void deposit(int amount){

          if(amount<0)
          throw invalidamounterror("amount should be greater than zero\n");
          
            balance+=amount;
            cout<<"amout is deposited successfully"<<endl;
    }
    // withdraw :::

    void withdraw(int amount){
        if(amount>0 && balance>=amount){
            balance-=amount;
            cout<<"amount is debited successfully"<<endl;

        }
        else if(amount<0){
            throw "amount should be greater than zero\n";
        }

        //runtime_error is also a class...

        else{
            throw insufficientbalance_error("balance is low\n");
        }
    }
};

int main(){
    customer c1("Rohit",5000,10);

    try{
    c1.deposit(100);
    c1.withdraw(60000);
    }
    catch(const runtime_error *e){
        cout<<"Exception occured "<<e<<endl;
    }
    catch(...){
        cout<<"exception occured"<<endl;
    }


}
