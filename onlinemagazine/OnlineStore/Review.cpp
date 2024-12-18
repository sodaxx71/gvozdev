#include "Review.h"

Review::Review(){}

Review::Review(int id, Customer* customer, Product* product, int rating, string comment) : id(id), customer(customer), product(product), rating(rating), comment(comment) {}


void Review::display() const {
    cout << "Rating: " << rating << "/5\n" << "Comment: " << comment << "\nBy: " << customer->getName() << endl;
}