/*
  Pattern 9
          *  
        * * * 
      * * * * *
    * * * * * * *  
  * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *  
*/
#include<bits/stdc++.h>
using namespace std;
void print7(int n)
{
  for(int i=1;i<=n;i++)
  {
    //space
    for(int j=1;j<=n-i;j++)
    {
      cout << " ";
    }
    //Star
    for(int j=1;j<=2*i-1;j++)
    {
      cout << "*";
    }
    //Space
    for(int j=1;j<=n-i;j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}
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
  print7(n);
  print8(n);
}