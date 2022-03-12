/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        using namespace std;
        if(x<0) return false;
        else{
            long int temp_x = 0;
            long int flag_x = x;
            while(x){
                temp_x = temp_x*10 + x%10;
                x = x / 10;
            }
            if (temp_x == flag_x) return true;
            else return false;
        }
    }
};
// @lc code=end

