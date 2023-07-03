#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s = "Atheeq";
  cout << s << endl;
  int len = s.size();
  cout << len << endl;
  cout << s[len-4] << endl;
  s[len-5] = 'r';
  cout << s << endl;
}