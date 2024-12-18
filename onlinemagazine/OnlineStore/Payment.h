#pragma once
#include <string>
#include "Order.h"

class Payment {
private:
    int id;
    Order* order;
    double amount;
    std::string status;

public:
    Payment(int id, Order* order, double amount);

    void setStatus(const std::string& status);
    void display() const;
};

