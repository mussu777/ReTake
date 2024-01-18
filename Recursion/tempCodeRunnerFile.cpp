#include<bits/stdc++.h>
using namespace std;

int myfunction(int n)
{
    if (n <=5)
    {
        return 0;
    }
    cout<<n<<endl;
    n++;
    myfunction(n);
}

int main ()
{
    int n = 1;
    
    myfunction(n);

    
}