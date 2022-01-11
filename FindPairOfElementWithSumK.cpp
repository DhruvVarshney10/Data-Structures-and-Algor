// FindPairOfElementWithSumK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 2, 2022

#include <iostream>
using namespace std;
#include <vector>;

class Solution
{
public:
    void PairWithSum(vector <int>& a, int sum) {
        for (int i = 0; i < a.size(); i++) {
            for (int j = i + 1; j < a.size(); j++) {
                if (a[i] + a[j] == sum) {
                    cout << a[i] << " and " << a[j] << " Add to " << sum << endl;
                }
            }
        }
    }

};


int main()
{
    Solution s;
    vector<int> arr = {3, 5, 8, 2, 4, 6, 9};
    s.PairWithSum(arr, 5);

}
/*
output- 

3 and 2 Add to 5
*/


