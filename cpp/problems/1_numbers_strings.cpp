#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    string name{};
    double base{0.0};
    double height{0.0};

    cout << "What's your name?: ";
    getline(cin, name);

    cout << "Greetings, " << name << ", let's calc the area and perimeter of a rectangle." << endl;

    cout << "Give me, the base: ";
    cin >> base;

    cin.ignore(); // clean buffer

    cout << "Now, the height: ";
    cin >> height;

    cin.ignore(); // clean buffer

    double area = (base * height) / 2;
    double perimeter = pow(base, 2) + pow(height, 2);

    cout << "The area is " << area << " and the perimeter is " << perimeter << endl;

    cout << "\n================================\n";

    int a{0};
    int b{0};
    int c{0};

    cout << "\nNow, give me three numbers\n";
    cout << "a: ";
    cin >> a;
    cin.ignore();
    cout << "b: ";
    cin >> b;
    cin.ignore();
    cout << "c: ";
    cin >> c;

    decltype(a) sum = a + b + c;
    double avg = (static_cast<double>(a) + static_cast<double>(b) + static_cast<double>(c)) / 3;

    cout << "Sum: " << sum << "\nAverage: " << avg << endl;

    cout << "\n================================\n";

    int m{0};
    double h{0.0};

    cout << "\nLet's convert minutes to hours\n";
    cout << "How minutes do you want to convert? ";
    cin >> m;

    cin.ignore();

    // other way: m * 1.0 / 60
    h = static_cast<double>(m) * 1 / 60;

    cout << "Hour/s: " << h;

    cout << "\n================================\n";

    double firstTerm{0};
    double secondTerm{0};
    double thirdTerm{0};
    double finaltest{0};
    double finalProject{};

    cout << "\nGrades grades grades, let's calc your final grade." << endl;
    cout << "First of all, enter your grades from the terms: " << endl;
    cout << "First term: ";
    cin >> firstTerm;
    cin.ignore();

    cout << "Second term: ";
    cin >> secondTerm;
    cin.ignore();

    cout << "Third term: ";
    cin >> thirdTerm;
    cin.ignore();

    cout << "Now, enter your final test grade: ";
    cin >> finaltest;
    cin.ignore();

    cout << "Now, enter your final project grade: ";
    cin >> finalProject;
    cin.ignore();

    cout << "These are the rules to calculate your final grade:\n";
    cout << "55% terms' average\n30% final test\n15% final project\n";

    double finalGrade = (((firstTerm + secondTerm + thirdTerm) / 3) * (55.0 / 100)) + (finaltest * (30.0 / 100)) + (finalProject * (15.0 / 100));

    cout << "Your final grade is " << finalGrade << endl;

    return 0;
}