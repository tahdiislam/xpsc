#include <bits/stdc++.h>
using namespace std;

struct Person
{
    string first_name;
    string last_name;
    int age;
    float salary;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    Person person1;
    person1.first_name = "hello world";
    person1.last_name = "world";
    person1.age = 23;
    person1.salary = 40;
    cout << "Name : " << person1.first_name << " " << person1.last_name << "\n"
         << "Age : " << person1.age << "\n"
         << "Salary : " << person1.salary << "\n";
    return 0;
}