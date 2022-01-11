// FindingSingleMissingElementSortedArray.cpp 
//Dhruv Varshney
//Jan 1, 2022

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int SingleMissingElement(vector <int>& a) {
        int sum = 0;
        int missing;
        for (int i = 0; i < a.size(); i++) {
            sum += a[i];
        }
        missing = ((a[a.size() - 1] * (a[a.size() - 1] + 1)) / 2) - sum;
        return missing;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8, 9};
    int r;
    r = s.SingleMissingElement(arr);
    cout << "The missing element is: " << r;
}

