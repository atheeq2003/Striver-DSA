#include<bits/stdc++.h>
using namespace std;
//Pass By Value // Takes the copy and does modifications on it
void doSomething(int num)
{
  cout << num << endl;
  num+=5;
  cout << num << endl;
  num+=5;
  cout << num << endl;
}
//Pass By Reference // Returns original Value
void doAnything(int &num)
{
  cout << num << endl;
  num+=5;
  cout << num << endl;
  num+=5;
  cout << num << endl;
}
void doSomethingtwo(int a[], int m) //When passing array it always goes by pass by reference
{
  cout << a[0] << endl;
  a[0]+=5;
  cout << a[0] << endl;
}
int main()
{
  int num;
  cin >> num;
  doSomething(num);
  cout << num << "\n" << endl;
  doAnything(num);
  cout << num << "\n" << endl;
  int n=5;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  doSomethingtwo(arr, n);
  cout << arr[0] << endl;
  return 0;
} 