#include<bits/stdc++.h>
using namespace std;
// void -> which does not return anything
// return
// parameterised
// non parameterised
int subtraction(int m, int n)
{
  int s;
  s=m-n;
  return s;
}
void addition(int f,int g)
{
  int add;
  add=f+g;
  cout << add << endl;
}
void printName(string name)
{
  cout << "Hi " << name << endl; 
}
int main()
{
  int a,b,c,d,sub;
  cin >> a >> b;
  addition(a,b);
  cin >> c >> d;
  sub = subtraction(c,d);
  cout << sub << endl;
  string name;
  string name2;
  cin >> name;
  printName(name);
  cin >> name2;
  printName(name2);
  return 0;
}
