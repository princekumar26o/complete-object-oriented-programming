#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// constructor...

class customer{
    string name;
    int account_number;
    int balance;

    public:
    customer(){
        name="rohit";
        account_number=5;
        balance=5;

    }


// parameterized constructor....
    customer(string name,int account_number,int balance){
        this->name=name;
        this->account_number=account_number;
        this->balance=balance;

    }


//constructor overloading...
    customer(string a,int b){

    }

// inline constructor...

    void display(){
        cout<<name<<" "<<account_number<<endl;
    }

//copy constructor...
customer(customer &B){
    name=B.name;
    account_number=B.account_number;
    balance=B.balance;
}
// Destructor----- it is the last function which is going to be called before an object is destroy.
// only one destructor can we form in one class.
~customer(){
    
}
 void display(){
        cout<<name<<" "<<account_number<<endl;
    }

};

int main(){
    customer a,b,c;
    a.display();
    b.display();
    c.display();

    customer d("prince",68,10000);

    d.display();

    customer e(d);
    e.display();

    customer a5;
    a5=e;
    a5.display();


}
