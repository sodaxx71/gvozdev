#include "Discount.h"


Discount::Discount(int id, double percentage, time_t startDate, time_t endDate)
    : id(id), percentage(percentage), startDate(startDate), endDate(endDate) {
}

int Discount::getId() const { return id; }
double Discount::getPercentage() const { return percentage; }

bool Discount::isActive() const {
    time_t now = time(0);
    return now >= startDate && now <= endDate;
}

void Discount::setPercentage(double percentage) { this->percentage = percentage; }
void Discount::setDates(time_t start, time_t end) {
    this->startDate = start;
    this->endDate = end;
}