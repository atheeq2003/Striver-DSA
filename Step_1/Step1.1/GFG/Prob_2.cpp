/*
Link -> https://practice.geeksforgeeks.org/problems/java-if-else-decision-making0924/0?category%5B%5D=Java&category%5B%5D=Java&difficulty%5B%5D=-2&page=1&query=category%5B%5DJavadifficulty%5B%5D-2page1category%5B%5DJava
Given two integers, n and m. The task is to check the relation between n and m.

Example 1:
Input:
n = 4
m = 8
Output:
lesser

Explanation:
4 < 8 so print 'lesser'.

Example 2:
Input:
n = 8
m = 8
Output:
equal

Explanation:
8 = 8 so print 'equal'.
*/
class Solution {
  public:
    string compareNM(int n, int m){
        if(n < m)
        {
            return string("lesser");
        }
        else if(n > m)
        {
            return string("greater");
        }
        else
        {
            return string("equal");
        }
    }
};