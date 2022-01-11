// PairofElementsWithSumKSortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 2, 2022

#include <iostream>
using namespace std;
#include <vector>;

class Solution
{
public:
    void PairWithSum(vector <int>& a, int sum) {
        int i = 0;
        int j = a.size() - 1;
          while(i < j) {
                if (a[i] + a[j] == sum) {
                    cout << a[i] << " and " << a[j] << " Add to " << sum << endl;
                    i++;
                    j--;
                }
                if (a[i] + a[j] > sum) {
                    j--;
                }
                if (a[i] + a[j] < sum) {
                    i++;
                }
          }
    }

};

int main()
{
    Solution s;
    vector<int> arr = { 1, 2, 3, 5, 6, 7, 9};
    s.PairWithSum(arr, 8);
}
/*
output- 

1 and 7 Add to 8
2 and 6 Add to 8
3 and 5 Add to 8
*/

