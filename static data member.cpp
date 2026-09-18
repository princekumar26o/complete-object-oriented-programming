#include <bits/stdc++.h>
using namespace std;
// static data member
// this is same for all the object of the same class
// this attribute is only created once;
class Student {
public:
    string name;

    // Static data member
    static int count;

    // Constructor
    Student(string name) {
        this->name = name;
        count++;
    }

    // Static member function
    static void showCount() {
        cout << "Total students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {

    Student s1("Prince");
    Student s2("Rahul");
    Student s3("Aman");

    cout << s1.name << endl;
    cout << s2.name << endl;
    cout << s3.name << endl;

    // Calling static function using class name
    Student::showCount();

    return 0;
}
