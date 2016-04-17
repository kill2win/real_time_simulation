// program 4, arrays
#include <iostream>
using namespace std;
int main()
{
// array of integers
int ai[5];
// five elements, running from 0 to four. Giving them all a value:
for (int ii = 5; ii--; ) {
ai[ii] = ii;
}
// now, print some of these: Notice the print statement occupies 2 lines
cout << "ai[0] = " << ai[0] << endl
<< "ai[4] = " << ai[4] << endl;
// arrays of characters are used to hold words:
char ac[5];
// a word, by convention ended with the ’0’ character, also called a
// "C-style" string
ac[0] = ’w’;
ac[1] = ’o’;
ac[2] = ’r’;
ac[3] = ’d’;
ac[4] = 0;    // not ’0’!
cout << "ac = " << ac << endl;
// This is a lot of work. Wait for the program on pointers for a
// quicker way of writing something.
return 0;
}