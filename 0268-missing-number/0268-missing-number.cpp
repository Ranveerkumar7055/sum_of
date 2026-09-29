class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int originalsum = 0;
        for(int num : nums){
            originalsum += num;
        }
        return sum-originalsum;
    }
};