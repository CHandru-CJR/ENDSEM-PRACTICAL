#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> customers;


    customers.push("Kim");
    customers.push("Rio");
    customers.push("Alex");
    customers.push("Jeff");

    cout << "Customers added to the queue." << endl;


    if (!customers.empty()) {
        cout << "Taxi assigned to: " << customers.front() << endl;
        customers.pop();
    }


    cout << "\nRemaining customers:" << endl;

    while (!customers.empty()) {
        cout << customers.front() << endl;
        customers.pop();
    }

    return 0;
}
