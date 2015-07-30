/*****

    ## Simple cpp program #1 ]

    # Simple c++ program w/no frills or exception handling
    of any kind.

    # Computes summation of a number utilizes a recursive function 'sum' of the integer type.

    # This is a simple program for learning purposes in no means is it meant to be used for official application.

****/

#include <iostream>

using namespace std;

int sum(int num);

int main()
{
     int getNum;

     // User defines num/input
     cout << "Find summation for what #? ";
     cin >> getNum;

     cout <<  sum(getNum) << endl;

    return 0;
}
int sum(int num) {

     // Return 0 when n is 0
     if ( num <= 0 )
        return 0;
     else
        return num + sum(num-1);
}
