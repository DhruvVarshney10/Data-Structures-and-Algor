// FindingDuplicatesUnsortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void duplicates(vector <int>& a) {

        for (int i = 0; i < a.size(); i++) {
            int count = 1;
            for (int j = i+1; j < a.size(); j++) {
                if (a[i] == a[j]) {
                    count++;
                    a[j] = -1;
                }
            }
            if (count > 1 && a[i] != -1) {
                cout << a[i] << " appears " << count << " times " << endl;

            }
        }
    }

};


int main()
{
    Solution s;
    vector<int> arr = {3, 5, 5, 3, 7, 9, 2, 6, 3, 4, 7, 6};
    s.duplicates(arr);

}
/*
output - 

3 appears 3 times
5 appears 2 times
7 appears 2 times
6 appears 2 times
*/


