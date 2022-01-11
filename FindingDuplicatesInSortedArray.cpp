// FindingDuplicatesInSortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Dhruv Varshney
//Jan 2, 2022

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void duplicates(vector <int>& a) {
        int k;
        for (int i = 0; i < a.size(); i++) {
            if (i != a.size() - 1) {
                if (a[i] == a[i + 1]) {
                    k = i + 1;
                        while (a[i] == a[k] ) {
                            k++;
                        }
                        cout << a[i] << " appears " << k - i << " times " << endl;
                        i = k - 1;
                }
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3, 3, 4, 5, 5, 5, 6, 7, 8, 9};
    s.duplicates(arr);

}
/*
output- 
3 appears 2 times
5 appears 3 times

*/



