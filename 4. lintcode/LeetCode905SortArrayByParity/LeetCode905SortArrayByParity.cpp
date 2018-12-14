
#include <iostream>
#include <math.h>
#include <algorithm>
#include<vector>
#include<string>
#include <queue>
#include <stack>
#include <list>
#include <map>   //hash table
#include<unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int>ans(A.size());
        int start = 0;
        int end = A.size() - 1;
        for (int i = 0; i < A.size(); i++) {
            if (A[i] % 2 == 0) {
                ans[start] = A[i];
                start++;
            }
            else {
                ans[end] = A[i];
                end--;
            }
        }
        return ans;
    }
};



int main()
{

    vector<int>nums({ 3, 1 ,0 });
    Solution question;
    question.sortArrayByParity(nums);
    //Solution2 question2;
    //question2.sortedArrayToBST(nums);

    return 0;
}