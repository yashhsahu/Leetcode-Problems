class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int begin = 0, last = nums.size()-1;
        int sum;
        
        while(begin < last){
            sum = nums[begin] + nums[last];
            if(sum != target){
                last--;
                sum = nums[begin] + nums[last];
            }
            if(sum == target){
                return {begin , last};
            }
            if(last == begin+1){
                last = nums.size()-1;
                begin++;
            }
        }
        return {};
    }
};