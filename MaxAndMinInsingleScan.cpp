// MaxAndMinInsingleScan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 2, 2022

#include <iostream>
using namespace std;
#include <vector>;

class Solution
{
public:
    void MinMax(vector <int>& a) {
        int min = a[0];
        int max = a[0];
        for (int i = 1; i < a.size(); i++) {
            if (a[i] < min) {
                min = a[i];
            }
            if(a[i] > max) {
                max = a[i];
            }
        }
        cout << "Min: " << min << endl << "Max: " << max;
    }

};

int main()
{
    Solution s;
    vector<int> arr = { 6, 7, 8, 9, 2, -1, 4, 0, 3};
    s.MinMax(arr);
}
/*
output- 

Min: -1
Max: 9
*/

