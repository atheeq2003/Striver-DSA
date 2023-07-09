/*
  Pattern 15
  A B C D E 
  A B C D 
  A B C
  A B
  A
*/
#include<bits/stdc++.h>
using namespace std;
void print15(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(char j='A';j<='A'+n-i-1+1;j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}           
int main()
{
  int n;
  cin >> n;
  print15(n);
  return 0;
}