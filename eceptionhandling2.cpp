#include<iostream>
#include<exception>

using namespace std;

/*class exception{
    protected:
    string msg;

    public:

    exception(string msg){
        this->msg=msg;
    }

    string what(){
        return msg;
    }
}
    */

int main(){
   /* int a,b;
    cin>>a>>b;
    try{
        if(b==0)
        throw "divided by zero is not possible";
        int c=a/b;
    }
    catch(const char *e){
        cout<<"Exception occured "<<e<<endl;
    }

    */
   try{
   int *p=new int[1000000000000000];
   cout<<"memory allocation is succesful\n";

   delete []p;
   }
   catch(const bad_alloc &e){
      cout<<"EXception occured due to line 18 ::"<<e.what()<<endl;
   }
}

// exception class...
// child class of exception class
// std:: bad_alloc
// std:: bad_cast
// std:: bad_typeid
// std:: bad_exception
// std:: bad_failure
// std:: run_time
