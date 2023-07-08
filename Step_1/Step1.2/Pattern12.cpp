/*
  Pattern 12
  1             1
  1 2         2 1
  1 2 3     3 2 1
  1 2 3 4 4 3 2 1
*/
#include<bits/stdc++.h>
using namespace std;
void print12(int n)
{
  int spaces = 2*(n-1);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++){
              cout<<j;
          }
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          for(int j=i;j>=1;j--){
              cout<<j;
          }
          cout<<endl;
          spaces-=2;
  }
}           

int main()
{
  int n;
  cin >> n;
  print12(n);
  return 0;
}