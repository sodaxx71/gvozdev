#include "Notification.h"
#include <iostream>


Notification::Notification(int id, Customer* customer, string message)
    : id(id), customer(customer), message(message) {
    date = time(0);
}

void Notification::display() const {
    cout << "Notification for " << customer->getName() << ": " << message
        << " (" << ctime(&date) << ")" << endl;
}