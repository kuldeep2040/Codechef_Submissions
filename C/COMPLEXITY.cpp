// https://www.codechef.com/problems/COMPLEXITY


#include <iostream>
using namespace std;

int main()
{
     int t, i, x, y;
     cin>>t;
     for(i=0; i<t; i++)
     {
         cin>>x>>y;
         if(x>y)
         cout<<"YES\n";
         else 
         cout<<"NO\n";
     }
    return 0;
}
