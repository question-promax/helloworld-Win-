//了解“小数加法”

#include <iostream>
using namespace std;

int main() 
{
    float x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    // Check if the user entered valid integers
    if (cin.fail()) {
        cout << "Invalid input. Please enter two integers." << endl;
        return 1;
    }

    float sum = x + y;
    cout << "Sum: " << sum << endl;

    return 0;
}