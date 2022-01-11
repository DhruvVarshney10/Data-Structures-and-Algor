// FindingMultipleMissingElementSortedArray.cpp 
//Dhruv Varshney
//Jan 2, 2022

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void MultipleMissingElement(vector <int>& a) {
        int diffrence = a[0] - 0;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] - i != diffrence) {
                while (diffrence < a[i] - i) {
                    cout << (i + diffrence) << " ";
                    diffrence++;
                }
            }
        }
    }
};

int main()
{
    Solution s;
    vector<int> arr = { 1, 2, 3, 6, 7, 9 };
    s.MultipleMissingElement(arr);
    
}
/*
output - 4 5 8
*/

