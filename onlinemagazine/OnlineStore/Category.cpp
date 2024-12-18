#include "Category.h"
#include <iostream>

Category::Category(int id, const string& name, const string& description)
    : id(id), name(name), description(description) {
}

void Category::addProduct(Product* product) {
    products.push_back(product);
}

void Category::removeProduct(int productId) {
    products.erase(remove_if(products.begin(), products.end(),
        [productId](Product* p) { return p->getId() == productId; }),
        products.end());
}

void Category::displayProducts() const {
    cout << "Category: " << name << "\nProducts:\n";
    for (const auto& product : products) {
        cout << "- " << product->getName() << " (Price: " << product->getPrice() << ")\n";
    }
}

string Category::getName() const { return name; }
int Category::getId() const { return id; }