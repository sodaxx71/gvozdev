#pragma once
#include <iostream>
#include <string>
#include "Discount.h"
#include "Review.h"
using namespace std;


class Product {
private:
    int id;
    string name;
    string description;
    double price;
    int stock;
    Discount* discount;
    vector<Review*> reviews;
public:
    Product(int id, string name, string description, double price, int stock);

    int getId() const;
    string getName() const;
    string getDescription() const;
    double getPrice() const;
    int getStock() const;

    void setName(string name);
    void setDescription(string description);
    void setPrice(double price);
    void setStock(int stock);
    void setDiscount(Discount* discount);
    void addReview(Review* review);
    void displayReviews() const;
    double getDiscountedPrice() const;

    void display() const;
};

