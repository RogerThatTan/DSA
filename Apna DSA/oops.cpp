#include <iostream>
#include <string>
using namespace std;

// class Teacher
// {
// private:
//     double salary;

//     // properties/attributes
// public:
//     // Teacher()
//     // {
//     //     dept = "Computer Science";
//     // }

//     Teacher(string name, string dept, string subject, double salary)
//     {

//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//         this->salary = salary;

//         // name = n;
//         // dept = d;
//         // subject = s;
//         // salary = sal;
//     }

//     Teacher(Teacher &orgObj)
//     { // pass by refrence
//         cout << "I am custom copy constructor" << endl;
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = "IPE";
//         this->salary = orgObj.salary;
//     }

//     ~Teacher()
//     {
//         cout << "Hello I am destructor" << endl;
//     }

//     string name;
//     string dept;
//     string subject;

//     // methods//member function

//     void changeDept(string newDept)
//     {
//         dept = newDept;
//     }

//     void setSalary(double s)
//     {
//         salary = s;
//     }

//     double getSalary()
//     {
//         return salary;
//     }

//     void getInfo()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Subject: " << subject << endl;
//         cout << "Salary: " << salary << endl;
//     }
// };

// class Student
// {
// public:
//     string name;
//     int rollno;
//     int age;
// };

// class Account
// {
// private:
//     double balance;
//     string password;

// public:
//     string accountId;
//     string username;
// };

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        cout << "I am Person parameter constructor" << endl;

        this->name = name;
        this->age = age;
    }

    Person()
    {
        cout << "I am Person constructor" << endl;
    }
    ~Person()
    {
        cout << "I am Person destructor" << endl;
    }
};

class Student : public Person
{
public:
    int rollno;
    Student(string name, int age, int rollno) : Person(name, age)
    {
        cout << "I am student constructor" << endl;
        this->rollno = rollno;
    }
    ~Student()
    {
        cout << "I am student destructor" << endl;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roll no: " << rollno << endl;
    }
};

int main()
{
    // Teacher t1("Tanvir", "CS", "C++", 2000);
    // t1.getInfo();

    // Teacher t2(t1); // default copy constructor invoked
    // t2.getInfo();

    // Teacher t2;
    // Teacher t3;
    // t1.name = "Tanvir";
    // t1.subject = "CSS";
    // // t1.dept = "CS";
    // t1.setSalary(25000);
    // cout << t1.name << endl;
    // cout << t1.dept << endl;
    // t1.changeDept("EEE");
    // cout << t1.dept << endl;
    // cout << t1.getSalary() << endl;

    Student s1("tanvir", 22, 23);
    s1.name = "Tanvir";
    s1.age = 25;
    s1.rollno = 22;

    s1.getInfo();

    return 0;
}