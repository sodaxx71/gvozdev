#include "Product.h"


Product::Product(int id, string name, string description, double price, int stock) : id(id), name(name), description(description), price(price), stock(stock) {}

int Product::getId() const { return id; }
string Product::getName() const { return name; }
string Product::getDescription() const { return description; }
double Product::getPrice() const { return price; }
int Product::getStock() const { return stock; }
double Product::getDiscountedPrice() const {
    if (discount != nullptr && discount->isActive()) {
        return price * (1 - discount->getPercentage() / 100.0);
    }
    return price;
}

void Product::setDiscount(Discount* discount) { this->discount = discount; }
void Product::setName(string name) { this->name = name; }
void Product::setDescription(string description) { this->description = description; }
void Product::setPrice(double price) { this->price = price; }
void Product::setStock(int stock) { this->stock = stock; }
void Product::addReview(Review* review) {reviews.push_back(review);}

void Product::display() const {
    cout << "Product ID: " << id << "\nName: " << name
        << "\nDescription: " << description << "\nPrice: $" << price
        << "\nStock: " << stock << " units\n";
}
void Product::displayReviews() const {
    cout << "Reviews for " << name << ":\n";
    for (const auto& review : reviews) {
        review->display();
    }
}