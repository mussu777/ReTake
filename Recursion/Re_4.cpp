/*  Print Linearly from 1 to N (but by backtracking)  */

#include <bits/stdc++.h>
using namespace std;

int myFunction(int i)
{
    if (i < 1)
        return i ;

    
    myFunction(i - 1);
    cout << i << endl;
}

int main()
{
    int i = 10;
    myFunction(i);

    return 0;
}