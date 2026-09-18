#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//virtual function...

// pure virtual function-> no any object can acces it own class function.
// virtual void speak()=0; ...abstract class


class animal{
    public:

    virtual void speak(){
        cout<<"HUHU"<<endl;
    }
};

class dog:public animal{

    public:

    void speak(){
        cout<<"Bark"<<endl;
    }

    void roti(){
        cout<<"Hello"<<endl;
    }
};

class cat:public animal{

    public:

    void speak(){
        cout<<"meuu"<<endl;
    }

};

int main(){
   // animal *p;
   // p=new dog();
   // p->speak();
   // p->roti(); ....not allowed

   animal *p;
   vector<animal*>animals;

   animals.push_back(new dog());
   animals.push_back(new cat());
   animals.push_back(new animal());
   animals.push_back(new dog());
   animals.push_back(new cat());

   for(int i=0;i<animals.size();i++){
         animals[i]->speak();
   }

}
