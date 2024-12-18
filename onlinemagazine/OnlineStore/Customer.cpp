#include "Customer.h"


Customer::Customer(){}


Customer::Customer(int id, string name, string email)
    : id(id), name(name), email(email) {
}

int Customer::getId() const { return id; }
string Customer::getName() const { return name; }
string Customer::getEmail() const { return email; }
vector<Product*> Customer::getCart() const { return cart; }

void Customer::setName(string name) { this->name = name; }
void Customer::setEmail(string email) { this->email = email; }

void Customer::addNotification(Notification* notif) {
    notifications.push_back(notif);
}

void Customer::addToCart(Product* product) {
    cart.push_back(product);
}

void Customer::removeFromCart(Product* product) {
    cart.erase(remove(cart.begin(), cart.end(), product), cart.end());
}

void Customer::display() const {
    cout << "Customer ID: " << id << "\nName: " << name
        << "\nEmail: " << email << "\nCart Items:\n";
    for (const auto& product : cart) {
        product->display();
    }
}

void Customer::displayNotifications() const {
    for (const auto& notif : notifications) {
        notif->display();
    }
}
