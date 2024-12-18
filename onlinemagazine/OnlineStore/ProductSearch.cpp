#include "ProductSearch.h"

vector<Product*> ProductSearch::searchByName(const vector<Product*>& products, const string& name) {
    vector<Product*> result;
    for (auto& product : products) {
        if (product->getName().find(name) != string::npos) {
            result.push_back(product);
        }
    }
    return result;
}

vector<Product*> ProductSearch::filterByPrice(const vector<Product*>& products, double minPrice, double maxPrice) {
    vector<Product*> result;
    for (auto& product : products) {
        if (product->getPrice() >= minPrice && product->getPrice() <= maxPrice) {
            result.push_back(product);
        }
    }
    return result;
}
