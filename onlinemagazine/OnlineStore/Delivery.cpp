#include "Delivery.h"
#include <iostream>

Delivery::Delivery(int id, Order* order, const std::string& address)
    : id(id), order(order), address(address), status("In Progress") {
}

void Delivery::setStatus(const std::string& newStatus) { status = newStatus; }

void Delivery::display() const {
    std::cout << "Delivery for Order ID: " << order->getId()
        << " | Address: " << address
        << " | Status: " << status << std::endl;
}