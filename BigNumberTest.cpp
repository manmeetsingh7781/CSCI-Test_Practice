// Manmeet Singh
// This program tests the BigNumber and prints the sum up to 100 digits
#include "BigNumber.h"
#include <iostream>
using namespace std;

int main()
    {
    // Declare the three numbers, the first, second and the sum:
    BigNumber num1, num2, sum;
    bool done = false;
    char response;
    while (not done)
        {
        cout << "Please enter a number up to "<<MAX_DIGITS<< " digits: ";
        num1.readbig();
        cout << "Please enter a number up to "<<MAX_DIGITS<< " digits: ";
        num2.readbig();
        sum=num1.addbig(num2);
        num1.printbig();
        cout << "\n+\n";
        num2.printbig();
        cout << "\n=\n";
        sum.printbig();
        cout << "\n";
        cout <<"test again?";
        cin>>response;
        cin.ignore(900,'\n');
        done = toupper(response)!='Y';
        }
    return 0;
}
