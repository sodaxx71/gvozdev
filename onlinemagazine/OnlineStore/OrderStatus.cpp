#include "OrderStatus.h"
#include <iostream>
#include <string>
using namespace std;

OrderStatus::OrderStatus(int id, const string& name, const string& description)
    : id(id), name(name), description(description) {
}

string OrderStatus::getName() const { return name; }

void OrderStatus::setName(const string& newName) { name = newName; }

void OrderStatus::display() const {
    cout << "Status: " << name << " - " << description << endl;
}