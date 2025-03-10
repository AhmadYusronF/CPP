#include <iostream>
using namespace std;

int main()
{
    int a = 30;       // Initialize variable 'a'
    const int x = 20; // Initialize constant variable 'x'

    cout << a << "\n"; // Output the value of 'a'

    // Uncommenting the line below will cause a compilation error
    // x = 30;

    a = 20; // Assign a new value to 'a'

    cout << a; // Output the new value of 'a'

    return 0;
}
