/*
 What is recursion ?
-> When  a function calls itself until a specified condtion is met.

*/



/* Print number upto 5 times*/
#include<bits/stdc++.h>
using namespace std;

int myfunction(int n)
{
    if (n ==6)
    return 0;
    cout<<n<<endl;
    n++;
    myfunction(n);
}

int main ()
{
    int n = 1;
    
    myfunction(n);

    
}

