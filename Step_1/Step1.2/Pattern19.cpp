/*
  Pattern 19
  E
  DE
  CDE
  BCDE
  ABCDE
*/
#include<bits/stdc++.h>
using namespace std;
void print19(int n)
{
  int start=0;
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<=n-i;j++)
    {
      cout<<"*";
    }
    for(int j=0;j<start;j++)
    {
      cout << " ";
    }
    for(int j=1;j<=n-i;j++)
    {
      cout<<"*";
    }
    start+=2;
    cout << endl;
  }
  start=2*n -2;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    for(int j=0;j<start;j++)
    {
      cout << " ";
    }
    for(int j=1;j<=i;j++)
    {
      cout<<"*";
    }
    start-=2;
    cout << endl;
  }
}         
int main()
{
  int n;
  cin >> n;
  print19(n);
  return 0;
}