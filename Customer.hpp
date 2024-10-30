#ifndef CUSTOMER_HPP
#define CUSTOMER_HPP

#include <string>
using namespace std;

struct Address {
    string street;
    string city;
    int zipCode;
};

struct Customer {
    string name;
    int id;
    Address address;  
};

#endif
