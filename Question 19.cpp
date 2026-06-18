#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string binary;
    int decimal = 0;

    cout << "Enter a binary number: ";
    cin >> binary;

    // Convert binary to decimal
    for (int i = 0; i < binary.length(); i++)
    {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    cout << "Decimal = " << decimal << endl;

    cout << "Octal = " << oct << decimal << endl;

    cout << "Hexadecimal = " << hex << uppercase << decimal << endl;

    return 0;
}

