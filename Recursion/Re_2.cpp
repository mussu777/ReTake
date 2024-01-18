/*  Print linearly from 1 to N ?  */

#include<bits/stdc++.h>
using namespace std;

void linear(int i , int n)
{
    if (i<=n)
    {
        cout<<i<<endl;
        linear(i+1, n);

    }

    return ;
}

int main ()
{
    int n;
    cin>>n;
    int i = 1;
    linear(i, n);

    return 0;
}