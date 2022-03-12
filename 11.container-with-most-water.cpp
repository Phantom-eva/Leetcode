// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem11.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int water = 0;
        int n = height.size();
        int i=0;
        int j=n-1;

        while(i<j){
            water = max(water,min(height[i],height[j])*(j-i));
            if(height[i]<height[j]){
                i++;
            }
            else {
                j--;
            }
        }
        return water;
    }
};
// @lc code=end

