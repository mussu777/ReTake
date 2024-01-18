
/* Sum of the first N numbers ?
*/

// Functional Way
#include<bits/stdc++.h>
using namespace std;


int numbers(int i)
{
    if (i == 0)
    {
        return 0;
    }

    return i + numbers(i-1);
}


int main ()
{
    int n ;
    cin>> n;

   int result =  numbers(n);

   cout<<result;
   
    return 0;
}