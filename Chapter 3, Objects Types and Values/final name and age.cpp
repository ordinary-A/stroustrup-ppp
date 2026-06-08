#include "std_lib_facilities.h"

int main() // C++ programs start by executing the function main
{
double age;
string first_name;
cout << "Please enter your name and age': ";
cin >> first_name; cin >> age;
age = age * 12; // convert years to months
cout << "Hello, " << first_name << "you are " << age <<" months old!\n";
keep_window_open(); // wait for a character to be entered
return 0;
}
//after implementing the requested task from strousrup, 5.5 year old kids are happy now!