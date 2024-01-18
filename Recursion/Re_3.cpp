/*  Print linearly from N to 1 ?  */

#include<bits/stdc++.h>
using namespace std;

void linear(int i , int n)
{
    if (i<n)
    {
        linear(i+1, n);
    }
    cout<<i<<endl;
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