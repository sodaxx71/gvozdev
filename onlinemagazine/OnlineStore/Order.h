#pragma once
#include "Customer.h"


class Order {
private:
    int id;
    Customer* customer;
    vector<Product*> products;
    double totalPrice;

public:
    Order();
    Order(int id, Customer* customer, vector<Product*> products);

    int getId() const;
    Customer* getCustomer() const;
    vector<Product*> getProducts() const;
    double getTotalPrice();

    void display() const;
};



