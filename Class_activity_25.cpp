#include <iostream>
#include "Customer.hpp"
using namespace std;

int main() {
    Customer customer;

    customer.name = "Delina Merhay";
    customer.id = 12345;
    customer.address.street = "171 Atlantic avenue";
    customer.address.city = "Oakland";
    customer.address.zipCode = 12345;

   
    cout << "Customer Name: " << customer.name << endl;
    cout << "Customer ID: " << customer.id << endl;
    cout << "Address: " << customer.address.street << ", "
        << customer.address.city << ", "
        << customer.address.zipCode << endl;

    return 0;
}
