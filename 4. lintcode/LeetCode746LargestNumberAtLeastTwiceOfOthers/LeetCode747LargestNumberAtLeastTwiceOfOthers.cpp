//https://leetcode.com/problems/largest-number-at-least-twice-of-others/description/
//
//In a given integer array nums, there is always exactly one largest element.
//
//Find whether the largest element in the array is at least twice as much as every other number in the array.
//
//If it is, return the index of the largest element, otherwise return -1.
//
//Example 1:
//
//Input: nums = [3, 6, 1, 0]
//	Output : 1
//	Explanation : 6 is the largest integer, and for every other number in the array x,
//	6 is more than twice as big as x.The index of value 6 is 1, so we return 1.
//
//
//	Example 2 :
//
//	Input : nums = [1, 2, 3, 4]
//	Output : -1
//	Explanation : 4 isn't at least as big as twice the value of 3, so we return -1.
//



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
	int dominantIndex(vector<int>& nums) {
		int maxIndex = 0;
		for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] > nums[maxIndex])
				maxIndex = i;
		}
		for (int i = 0; i < nums.size(); ++i) {
			if (maxIndex != i && nums[maxIndex] < 2 * nums[i])
				return -1;
		}
		return maxIndex;
	}
};

class Solution {
public:
	int dominantIndex(vector<int>& nums) {
		int maxInt = 0;
		int secondInt = 0;
		int ans = 0;
		for (int i = 0; i < nums.size(); i++) {

			if (secondInt < nums[i]) {
				secondInt = nums[i];
			}
			if (maxInt < secondInt) {
				swap(maxInt, secondInt);
				ans = i;
			}
		}
		if (secondInt * 2 <= maxInt) {
			return ans;
		}
		return -1;

	}
};


int main()
{

	vector<int>nums({ 3, 1 ,0 });
	Solution question;
	question.dominantIndex(nums);
	Solution question2;
	question2.dominantIndex(nums);

	return 0;
}