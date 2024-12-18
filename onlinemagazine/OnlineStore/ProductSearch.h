#pragma once
#include "Product.h"
#include <vector>


class ProductSearch {
public:
    static vector<Product*> searchByName(const vector<Product*>& products, const string& name);
    static vector<Product*> filterByPrice(const vector<Product*>& products, double minPrice, double maxPrice);
};

