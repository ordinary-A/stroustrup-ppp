#include "std_lib_facilities.h"

int main()
{
    cout << "Hello, World!\n";    // output "Hello, World!" and a newline
    keep_window_open();           // this is optional but i found that without it the output window closes too quickly for me to see the result, mentioned by stroustrup in the book
    return 0;                   // indicate that we are done with no errors
}