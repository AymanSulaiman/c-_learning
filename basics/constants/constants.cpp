#include <iostream>
using namespace std;

const double pi = 3.14159; //global constants are outside of the main function
const char newline = '\n';

int main ()
{
  double r=5.0;               // radius
  double circle;

  circle = 2 * pi * r;
  cout << circle;
  cout << newline;
}


