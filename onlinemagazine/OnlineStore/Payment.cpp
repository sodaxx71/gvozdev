#include "Payment.h"
#include <iostream>

Payment::Payment(int id, Order* order, double amount)
    : id(id), order(order), amount(amount), status("Pending") {
}

void Payment::setStatus(const std::string& newStatus) { status = newStatus; }

void Payment::display() const {
    std::cout << "Payment for Order ID: " << order->getId()
        << " | Amount: " << amount
        << " | Status: " << status << std::endl;
}
