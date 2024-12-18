#pragma once
#include <string>
#include <vector>
#include "Product.h"


using namespace std;

class Category {
private:
    int id;
    string name;
    string description;
    vector<Product*> products;

public:
    Category(int id, const string& name, const string& description);

    void addProduct(Product* product);
    void removeProduct(int productId);
    void displayProducts() const;

    string getName() const;
    int getId() const;
};