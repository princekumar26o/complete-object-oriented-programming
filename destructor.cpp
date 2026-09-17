#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int *data;

    public:
    customer(){
        cout<<"construct"<<endl;

    }
    customer(string name){
        this->name=name;
        cout<<name<<endl;
        cout<<"constructor is called"<<endl;
    }

// destructor...
// it is the last function which is going to be called before object is going to be deleted.
// it releases all the which is dynamically taken.

~customer(){
    cout<<" destructor:"<<name<<endl;

}

};
int main(){
    customer A1("ram"),B1("shyam"),C1("ghnasayam");
    // to create object dynamically;

    customer *a4=new customer("mohit");
    delete a4;

}
