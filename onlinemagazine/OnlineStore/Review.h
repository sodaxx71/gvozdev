#pragma once
#include <string>
#include "Customer.h"
#include "Product.h"


class Review {
private:
    int id;
    Customer* customer;
    Product* product;
    int rating;
    string comment;

public:
    Review();
    Review(int id, Customer* customer, Product* product, int rating, string comment);

    void display() const;
    
};

