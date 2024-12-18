#pragma once
#include <vector>
#include "Product.h"
#include "Notification.h"


class Customer {
private:
    int id;
    string name;
    string email;
    vector<Product*> cart;
    vector<Notification*> notifications;

public:
    Customer();
    Customer(int id, string name, string email);

    int getId() const;
    string getName() const;
    string getEmail() const;
    vector<Product*> getCart() const;

    void setName(string name);
    void setEmail(string email);

    void addToCart(Product* product);
    void removeFromCart(Product* product);

    void addNotification(Notification* notif);
    void displayNotifications() const;

    void display() const;
};




