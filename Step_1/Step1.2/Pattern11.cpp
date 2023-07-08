/*
  Pattern 11
  1
  0 1
  1 0 1
  0 1 0 1 
  1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;
void print11(int n)
{
  int lines;
  for(int i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      lines = 0;
    }
    else
    {
      lines = 1;
    }
    for(int j=1;j<=i;j++)
    {
      cout << lines << " ";
      lines = 1 - lines;
    }
    cout<<endl;
  }           
}
int main()
{
  int n;
  cin >> n;
  print11(n);
  return 0;
}