#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    unsigned int day;
    unsigned int month;
    unsigned int year;

public:
    Date() : day{1}, month{1}, year{2000} {}
    Date(unsigned int d, unsigned int m, unsigned int y) : day{d}, month{m}, year{y} {}

    unsigned int getDay() const
    {
        return day;
    }
    unsigned int getMonth() const
    {
        return month;
    }
    unsigned int getYear() const
    {
        return year;
    }

    void setDay(unsigned int &d)
    {
        day = d;
    }
    void setMonth(unsigned int &m)
    {
        month = m;
    }
    void setYear(unsigned int &y)
    {
        year = y;
    }

    void printDate() const
    {
        cout << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    }
};

class Employee
{

private:
    string name;
    unsigned int age;
    double salary;
    string department;
    static unsigned int employeesCount;
    Date hiredDay;

public:
    Employee() : name{""}, age{0}, salary{0}, department{""}, hiredDay{Date()}
    {
        employeesCount++;
    }
    Employee(const string &n, unsigned int a, double s, const string &d, const Date &dt) : name{n}, age{a}, salary{s}, department{d}, hiredDay(dt)
    {
        employeesCount++;
    }

    string getName() const
    {
        return name;
    }

    unsigned int getAge() const
    {
        return age;
    }

    double getSalary() const
    {
        return salary;
    }

    string getDepartment() const
    {
        return department;
    }

    void setName(const string &n)
    {
        name = n;
    }

    void setAge(const unsigned int &a)
    {
        age = a;
    }

    void setSalary(const double &s)
    {
        salary = s;
    }

    void setDepartment(const string &d)
    {
        department = d;
    }

    void setHiredDay(Date &dt)
    {
        hiredDay = dt;
    }

    double calcBonus()
    {
        return salary * 1.1;
    }

    double calcAnualSalary()
    {
        return salary * 12;
    }

    unsigned int getEmployeesTotal()
    {
        return employeesCount;
    }

    void showInfo() const
    {
        cout << "\nName: " << getName();
        cout << "\nAge: " << getAge();
        cout << "\nSalary: " << getSalary();
        cout << "\nDepartment: " << getDepartment();
        cout << "\nHired day: ";
        hiredDay.printDate();
    }
};

class Seasonal : public Employee
{
private:
    unsigned int contractDuration;

public:
    Seasonal(const string &n, unsigned int a, double s, const string &d, const Date &dt, unsigned int cd) : Employee{n, a, s, d, dt}, contractDuration{cd} {}

    unsigned int getContractDuration() const
    {
        return contractDuration;
    }

    void setContractDuration(const unsigned int &cd)
    {
        contractDuration = cd;
    }

    void showInfo()
    {
        Employee::showInfo();
        cout << "Contract duration: " << getContractDuration() << endl;
    }
};

class Permanent : public Employee
{
private:
    string benefit;

public:
    Permanent(const string &n, unsigned int a, double s, const string &d, const Date &dt, const string &bf) : Employee{n, a, s, d, dt}, benefit{bf} {}

    string getBenefit() const
    {
        return benefit;
    }

    void setBenefit(const string &bf)
    {
        benefit = bf;
    }

    void showInfo()
    {
        Employee::showInfo();
        cout << "Benefit: " << getBenefit() << endl;
    }
};

unsigned int Employee::employeesCount = 0;

int main()
{

    Employee E1;
    E1.setName("IG");
    E1.setAge(32U);
    E1.setSalary(850);
    E1.setDepartment("accountability");
    E1.showInfo();

    cout << endl;
    Date dt(20, 12, 2024);
    Employee E2("HG", 27, 567.56, "TI", dt);
    E2.showInfo();

    cout << endl;
    Date dts(18, 3, 2004);
    Seasonal E3("SA", 27, 567.56, "VT", dts, 3);
    E3.showInfo();

    cout << endl;
    Date dtp(7, 8, 2023);
    Permanent E4("FG", 27, 567.56, "TI", dtp, "Ensurance");
    E4.showInfo();

    cout << "\nEmployees total: " << E2.getEmployeesTotal() << endl;

    cout << endl;

    return 0;
}