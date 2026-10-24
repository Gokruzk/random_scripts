#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
private:
    unsigned int wheels;
    string name;
    string brand;

public:
    // constructor overloading
    Vehicle() : wheels{0}, name{""}, brand{""} {};
    Vehicle(unsigned int w, const string &n, const string &b) : wheels{w}, name{n}, brand{b} {};

    unsigned int getWheels() const
    {
        return wheels;
    }
    string getBrand() const
    {
        return brand;
    }
    string getName() const
    {
        return name;
    }
    void printInfo() const
    {
        cout << "Brand: " << getBrand() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Wheels: " << getWheels() << endl;
    }
    void setWheels(unsigned int wheels_)
    {
        wheels = wheels_;
    }
    void setBrand(string brand_)
    {
        brand = brand_;
    }
    void setName(string name_)
    {
        name = name_;
    }

    void run()
    {
        cout << "Running";
    }
};

class Car : public Vehicle
{
private:
    double fuel;
    unsigned int doors;

public:
    // constructor overloading
    Car() : fuel{0.0}, doors{0} {}
    Car(double f, unsigned int d) : fuel{f}, doors{d} {}
    Car(unsigned int w, const string &n, const string &b, double f, unsigned int d) : Vehicle{w, n, b}, fuel{f}, doors{d} {}

    void fillFuelTank()
    {
        while (fuel < 100)
        {
            fuel += 1;
        }
    }

    double getFuelTankLevel() const
    {
        return fuel;
    }

    void openDoors()
    {
        cout << "Doors opened" << endl;
    }

    void printInfo() const
    {
        Vehicle::printInfo();
        cout << "Fuel level: " << getFuelTankLevel() << "%" << endl;
    }
};

class Scooter : public Vehicle
{
private:
    unsigned int batteryPercentage;

public:
    Scooter(unsigned int w, const string &n, const string &b, unsigned int bp) : Vehicle{w, n, b}, batteryPercentage{bp} {}

    unsigned int getbatteryPercentage() const
    {
        return batteryPercentage;
    }
    void rechargeBattery()
    {
        while (batteryPercentage < 10)
        {
            batteryPercentage++;
        }
    }
    void jump()
    {
        cout << "Jumping" << endl;
    }
    void printInfo() const
    {
        Vehicle::printInfo();
        cout << "Battery percentage: " << getbatteryPercentage() << "%" << endl;
    }
};

int main()
{
    Car C1(4, "Corolla", "Toyota", 20, 4);
    Car rc(55, 4);
    Scooter S1(1, "X3B", "Xiaomi", 33);

    cout << "Fuel level: " << rc.getFuelTankLevel() << "%" << endl;
    rc.fillFuelTank();
    cout << "Fuel level: " << rc.getFuelTankLevel() << "%" << endl;

    rc.setBrand("Chevrolet");
    rc.setName("Silverado");
    rc.setWheels(4);

    cout << endl;

    C1.printInfo();

    cout << endl;

    rc.printInfo();

    cout << endl;

    S1.printInfo();

    return 0;
}