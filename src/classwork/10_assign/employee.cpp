//cpp
#include "employee.h"


Employee::Employee(double base_pay, double bonus) {
    this->base_pay = base_pay;
    this->bonus = bonus;
}

Employee::Employee(double hours, double rate, double commission) {
    this->hours = hours;
    this->rate = rate;
    this->commission = commission;
}
