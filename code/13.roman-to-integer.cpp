/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int out = 0;
        int n = s.length();
        int i = 0; 
        while(i < n){
            if(s[i]=='M'){
                out = out + 1000;
                i = i + 1;
            }
            else if (s[i]=='D'){
                out = out + 500;
                i = i + 1;
            }
            else if (s[i]=='C'){
                if(i+1 < n && s[i+1]=='D'){
                    out = out + 400;
                    i = i + 2;
                }
                else if(i+1 < n && s[i+1]=='M'){
                    out = out + 900;
                    i = i + 2;
                }
                else {
                    out = out + 100;
                    i = i + 1;
                }
            }
            else if (s[i]=='L'){
                out = out + 50;
                i = i + 1;
            }
            else if (s[i]=='X'){
                if(i+1 < n && s[i+1]=='L'){
                    out = out + 40;
                    i = i + 2;
                }
                else if(i+1 < n && s[i+1]=='C'){
                    out = out + 90;
                    i = i + 2;
                }
                else{
                    out = out + 10;
                    i = i + 1;
                }
            }
            else if (s[i]=='V'){
                out = out + 5;
                i = i + 1;
            }
            else if (s[i]=='I'){
                if(i+1 < n && s[i+1]=='V'){
                    out = out + 4;
                    i = i + 2;
                }
                else if(i+1 < n && s[i+1]=='X'){
                    out = out + 9;
                    i = i + 2;
                }
                else{
                    out = out + 1;  
                    i = i + 1;
                } 
            }

        }
        return out;
    }
};
// @lc code=end

