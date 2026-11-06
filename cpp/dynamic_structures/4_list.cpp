#include <list>
#include <iostream>
using namespace std;

int main()
{
    list<int> numbers{2, 3, 4, 5, 6};


    cout<<"Size: "<<numbers.size();
    cout << "is it empty? " << numbers.empty() << endl;

    numbers.push_front(1);
    numbers.push_back(7);

    numbers.pop_back();

    cout << "Front price: " << numbers.front() << endl;
    cout << "Back price: " << numbers.back() << endl;

    numbers.push_back(7);

    for (int n : numbers)
    {
        cout << n;
    }
}