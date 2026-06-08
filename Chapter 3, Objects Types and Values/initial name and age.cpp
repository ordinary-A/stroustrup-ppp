#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter your name (followed by enter): ";
    string first_name; //first_name is a variable of type string
    cin >> first_name; //read characters into first_name until we hit whitespace
    cout << "Hello, " << first_name << "!\n"; //output Hello, name!


    //nothing much to say about this, the inital code block Stroustrup gives us, pretty clear
}