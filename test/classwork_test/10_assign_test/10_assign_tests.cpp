#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "catch.hpp"

#include "engineer.h"
#include "sales_employee.h"

TEST_CASE("Verify Test Configuration", "verification") {
    REQUIRE(true == true);
}

TEST_CASE("Test class function Engineer::get_pay") {
    Engineer *engineer = new Engineer(1500, 400);
    REQUIRE(engineer->get_pay() == 1900);
}

TEST_CASE("Test class function SalesEmployee::get_pay") {
    SalesEmployee *sales_employee = new SalesEmployee(40, 10, 500);
    REQUIRE(sales_employee->get_pay() == 900);
}