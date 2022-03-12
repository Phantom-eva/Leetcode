/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int med_left,med_right,left,right;
        if((m+n)%2==0){
            med_left=(m+n)/2;
            med_right=med_left+1;
        }
        else{
            med_left=med_right=(m+n)/2+1;
        }
        int i,j,k;
        i=j=k=0;
        while(k<=med_left){
            if(nums1[i]<nums2[j]){
                left=nums1[i];
                i++;
                k++;
            }
            else{
                left=nums2[j];
                j++;
                k++;
            }
        }
        k=k-1;
        while(k<=med_right){
            if(nums1[i]<nums2[j]){
                right=nums1[i];
                i++;
                k++;
            }
            else{
                right=nums2[j];
                j++;
                k++;
            }
        }
        return (left+right)/2;
    }
};
// @lc code=end

