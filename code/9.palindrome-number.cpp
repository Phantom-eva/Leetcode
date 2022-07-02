/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return false;
        }
        int temp1, temp2;
        long int ans = 0;
        temp1 = x;
        while(temp1 != 0){
            temp2 = temp1 % 10;
            ans = ans*10 + temp2;
            temp1 /= 10;
        }
        if (ans == x) {
            return true;
        }
        else {
            return false;
        }
    }
};
// @lc code=end

