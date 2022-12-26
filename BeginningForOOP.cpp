
#include <iostream>
using namespace std;

//This is a form for every employee, u gonna use
class Employee {
public: // there are 3 mode: private, public, protected
    string Name;
    string Company;
    int Age;
    //method - a function in class
    void introduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Name - " << Age << endl;

    }
    //Constructor: is a special type of method, there is always having 1 default constructor
    /*
       3 rules when creating constructor:
        1. The constructor doesn't have a return type - int, void, string,...
        2. The constructor name and class name are THE SAME
        3. The constructor must be public
    */
    Employee(string name,string company,int age) {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    int number;
    // class + object    //constructor 
    Employee employee1 = Employee("Binh", "Google", 18);
    /*employee1.Name = "Binh";
    employee1.Age = 18;
    employee1.Company = "Google";
    employee1.introduceYourself();
    */ // this is when we use default constructor
    employee1.introduceYourself();
 
    Employee employee2 = Employee("Van", "YT", 18);
    employee2.introduceYourself();
    // this is when we set our constructor, because the default constructor are deleted
    // when we creates a new one
}

