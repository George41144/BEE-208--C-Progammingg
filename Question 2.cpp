#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, area;

    cout << "Enter radius: ";
    cin >> r;

    area = 3.14159 * pow(r, 2);

    cout << "Area = " << area;

    return 0;
}
