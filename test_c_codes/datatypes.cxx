// program 2, some basic variable types
#include <iostream>
using namespace std;
int main()
{
int i;
float f(0.6f);
double d = 5.7;
char c = ’=’;     // notice the use of single quotes
bool b = true;
// how does "true" print?
cout << "b = " << b << endl;
// giving a value to i
i = 2;
// a calculation, everything is implicitly converted
double rd = i
*
f/3 +d;
cout << "i
*
f/3 +d, implicit " << c << rd << endl;
// explicit conversion to integer first
int ri = int(i)
*
int(f)/int(3) + int(d);
cout << "i
*
f/3 +d, integer " << c << ri << endl;
// what is the result from this calculation?
cout << "i/3
*
f +d, question? " << c << i/3
*
f +d << endl;
// here is a new one, an "enumerated" type, you can define what the
// names are
enum SimState {
Running,
Stopped
};
// after defining the enum, you can make a variable of this type
SimState s = Running;
// enums are sometimes handled as integers, e.g. for printing
cout << "SimState " << s << endl;
return 0;
}