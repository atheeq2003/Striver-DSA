/*
  Pattern 8
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *  
*/
#include<bits/stdc++.h>
using namespace std;
void print8(int n)
{
  for(int i=1;i<=n;i++)
  {
    //space
    for(int j=1;j<=i-1;j++)
    {
      cout << " ";
    }
    //Star
    for(int j=1;j<=2*n-(2*i-1);j++)
    {
      cout << "*";
    }
    //Space
    for(int j=1;j<=i-1;j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
int main()
{
  int n;
  cin >> n;
  print8(n);
}