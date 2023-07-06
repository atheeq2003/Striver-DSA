/*
  Pattern 7
          *  
        * * * 
      * * * * *
    * * * * * * *  
  * * * * * * * * *
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
int main()
{
  int n;
  cin >> n;
  print7(n);
}