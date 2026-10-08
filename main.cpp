#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Superhero : public Person {
public:
    string superpower;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Superpower: " << superpower << endl;
        cout << endl;
    }
};

int main() {
    Superhero s1, s2, s3, s4;

    s1.name = "Kim";
    s1.age = 20;
    s1.superpower = "Laser Eyes";

    s2.name = "Rio";
    s2.age = 23;
    s2.superpower = "Super Strength";

    s3.name = "Alex";
    s3.age = 26;
    s3.superpower = "Flying";

    s4.name = "Jeff";
    s4.age = 18;
    s4.superpower = "Super Speed";

    s1.display();
    s2.display();
    s3.display();
    s4.display();

    return 0;
}
