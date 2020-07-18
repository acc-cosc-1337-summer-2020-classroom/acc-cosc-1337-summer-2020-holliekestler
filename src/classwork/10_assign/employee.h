
class Employee {
public:
    Employee() {}
    Employee(double base_pay, double bonus);
    Employee(double hours, double rate, double commission);

    virtual double get_pay() = 0;
    virtual ~Employee() = default;

protected:
    double base_pay, bonus, hours, rate, commission;
};