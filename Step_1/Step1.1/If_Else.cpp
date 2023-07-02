#include<bits/stdc++.h>
using namespace std;
/*
Take the age from the user and then decide accordingly
1.If age < 18,
  print -> "not eligible"
2.If age >= 18 and age <= 54,
  print -> "eligible for job"
3.If age >= 55 and age <= 57,
  print -> "eligible for job, but retirement soon"
4.If age > 57
  print -> "Retirement time"
*/
int main()
{
  int age;
  cin >> age;
  if(age < 18)
  {
    cout << "Not Eligible" << endl;
  }else if(age <= 54)
  {
    cout << "Eligible For Job" << endl;
  }else if(age <= 57)
  {
    cout << "Eligible for job" << endl;
    if(age >= 55)
    {
      cout << "But, Retirement Soon" << endl;
    }
  }
  else
  {
    cout << "Retirement Time" << endl;
  }
}
