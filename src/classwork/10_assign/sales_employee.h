//h
#include "employee.h"

class SalesEmployee : public Employee {
public:
    SalesEmployee(double hours, double rate, double commission);

    double get_pay();
};