//main
#include "employee.h"
#include "engineer.h"
#include "sales_employee.h"
#include <iostream>

using std::cout;
using std::cin;

int main() {
    char choice;
    double base_pay, bonus, hours, rate, commission;

    do {
        cout << "Enter 'e' to get engineer pay, 's' to get sales employee pay, or 'q' to quit: ";
        cin >> choice;

        if (choice == 'e') {
            cout << "Enter base pay: ";
            cin >> base_pay;

            cout << "Enter bonus: ";
            cin >> bonus;

            Employee *engineer = new Engineer(base_pay, bonus);

            cout << "Engineer pay: " << engineer->get_pay() << '\n';

            delete engineer;
            engineer = nullptr;
        } else if (choice == 's') {
            cout << "Enter hours: ";
            cin >> hours;

            cout << "Enter rate: ";
            cin >> rate;

            cout << "Enter commission: ";
            cin >> commission;

            Employee *sales_employee = new SalesEmployee(hours, rate, commission);

            cout << "Sales employee pay: " << sales_employee->get_pay() << '\n';

            delete sales_employee;
            sales_employee = nullptr;
        }
    } while (choice != 'q');

    return 0;
}