// simple program to exercise operators
#include "std_lib_facilities.h"


int main()
{
    cout << "Please enter an integer: ";
    
    int n;
    cin >> n;
    double n2 = n; // convert n to a double
    cout << "n == " << n
         << "\nn+1 == " << n + 1
         << "\nthree times n == " << 3 * n
         << "\ntwice n == " << n + n
         << "\nn squared == " << n * n
         << "\nhalf of n == " << n / 2
         << "\nsquare root of n == " << sqrt(n2)
         << "\nremainder when divided by 2 == " << n % 2
         << "\nn divided by 3 == " << n / 3
         << endl;   // another name for newline ('end of line')
}