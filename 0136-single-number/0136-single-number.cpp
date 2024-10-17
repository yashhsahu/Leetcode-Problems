class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = nums.front();
        for(int val=1; val<nums.size(); val++){
            single = single^nums.at(val);
        }
        return single;
    }
};