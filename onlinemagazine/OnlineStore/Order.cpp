#include "Order.h"


Order::Order(int id, Customer* customer, vector<Product*> products) : id(id), customer(customer), products(products), totalPrice(0.0) {
    for (auto product : products) {
        totalPrice += product->getPrice();
    }
}

int Order::getId() const { return id; }
Customer* Order::getCustomer() const { return customer; }
vector<Product*> Order::getProducts() const { return products; }

double Order::getTotalPrice() {
    totalPrice = 0.0;
    for (auto product : products) {
        totalPrice += product->getPrice();
    }
    return totalPrice;
}

void Order::display() const {
    cout << "Order ID: " << id << "\nCustomer: " << customer->getName()
        << "\nTotal Price: $" << totalPrice << "\nProducts:\n";
    for (const auto& product : products) {
        product->display();
    }
}