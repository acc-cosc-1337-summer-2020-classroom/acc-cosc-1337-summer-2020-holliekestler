//cpp
#include "engineer.h"

double Engineer::get_pay() {
    return base_pay + bonus;
}

Engineer::Engineer(double base_pay, double bonus) : Employee(base_pay, bonus) {

}
