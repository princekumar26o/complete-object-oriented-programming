#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//padding...
//static vs dynamic memory allocation..

class student{
    public:
    string name;
    int age,roll_number;
    string grade;
};

int main(){
    student *s=new student;
    (*s).name="rohit";
    (*s).age=21;
    (*s).roll_number=211;
    (*s).grade="A+";

    cout<<s->name<<endl;

}
