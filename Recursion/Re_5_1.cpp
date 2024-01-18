
/* Sum of the first N numbers ?
*/

// Parameterised Way
#include<bits/stdc++.h>
using namespace std;


int numbers(int i , int sum)
{
    if (i < 1)
    {
        cout<<sum;
        return 0;
    }

    numbers(i-1, sum+i);
}

int main ()
{
    int n ;
    int sum = 0;
    cin>> n;

    numbers(n, 0);

    return 0;
}