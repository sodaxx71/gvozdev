#pragma once
#include <string>

class OrderStatus {
private:
    int id;
    std::string name;
    std::string description;

public:
    OrderStatus(int id, const std::string& name, const std::string& description);

    std::string getName() const;
    void setName(const std::string& newName);
    void display() const;
};
