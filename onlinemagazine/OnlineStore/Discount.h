#pragma once
#include <string>
#include <ctime>
using namespace std;


class Discount {
private:
    int id;
    double percentage;
    time_t startDate;
    time_t endDate;

public:
    Discount(int id, double percentage, time_t startDate, time_t endDate);

    int getId() const;
    double getPercentage() const;
    bool isActive() const;

    void setPercentage(double percentage);
    void setDates(time_t start, time_t end);
};

