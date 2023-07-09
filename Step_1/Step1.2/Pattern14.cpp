/*
  Pattern 14
  A   
  A B   
  A B C  
  A B C D
  A B C D E 
*/
#include<bits/stdc++.h>
using namespace std;
void print14(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(char j='A';j<='A'+i-1;j++)
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
  print14(n);
  return 0;
}