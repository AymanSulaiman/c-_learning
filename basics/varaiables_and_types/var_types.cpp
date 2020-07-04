// understanding variables

/*
there are
    Characters
        char
        char16_t
        char32_t
        wchar_t
    
    Integers (signed)
        char
        short
        int
        long
        long long

    Integers (unsigned)
        unsigned char
        unsigned short
        unsigned int
        unsigned long
        unsigned long long
    
    Floating point types
        float
        double
        long double
    
    Boolean
        bool
    
    Void
        void
    
    Null
        decltype(nullptr)
*/

//starting the program

#include <iostream>
using namespace std;

int main()
{
    cout << "No initialisation";
    // declaring the variables
    int a, b;
    int result;

    // processing
    a = 5;
    b = 2;
    a = a + 1;
    result = a-b;

    //printing out the result
    cout << "hello world\n";
    cout << result;
    cout << "\nOn to the next stuff\n";

    // initialisation and the declaration of variables
    // on the same line
    cout << "\ninitialisation of variables\n";

    int d=5;
    int e(3);
    int f(2);
    int result_1;

    d = d+e;
    result_1 = d - f;

    cout << result_1;

    // Time for strings

    string my_string;
    my_string = "Hey look a string";
    cout << my_string << endl;

    return 0;
}