#pragma once
#include <string>
#include "Order.h"

class Delivery {
private:
    int id;
    Order* order;
    std::string address;
    std::string status;

public:
    Delivery(int id, Order* order, const std::string& address);

    void setStatus(const std::string& newStatus);
    void display() const;
};
