//cpp
#include "sales_employee.h"

double SalesEmployee::get_pay() {
    return hours * rate + commission;
}

SalesEmployee::SalesEmployee(double hours, double rate, double commission) : Employee(hours, rate, commission) {

}
