#pragma once
#include <string>
#include "Customer.h"


class Notification {
private:
    int id;
    Customer*customer;
    string message;
    time_t date;

public:
    Notification(int id, Customer* customer, string message);

    void display() const;
};
