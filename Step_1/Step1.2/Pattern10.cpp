/*
  Pattern 10
  *
  * *
  * * *
  * * * *
  * * * * *
  * * * *
  * * *
  * *
  * 
*/
#include<bits/stdc++.h>
using namespace std;
void print10(int n)
{
  for(int i=1;i<=2*n-1;i++)
  {
    int stars = i;
    if(i>n) stars = 2*n-i;
    for(int j=1;j<=stars;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }           
}
int main()
{
  int n;
  cin >> n;
  print10(n);
  return 0;
}