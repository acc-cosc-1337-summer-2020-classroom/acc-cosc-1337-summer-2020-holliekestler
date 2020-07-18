//h
#include "employee.h"

class Engineer : public Employee {
public:

    Engineer(double base_pay, double bonus);

    double get_pay();

};