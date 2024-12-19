class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i = 0, n = arr.size();
        int index = 0;

        while(i < n){
            if(arr[i+1] > arr[i]){
                i++;
                index++;
            }
            else if(arr[i+1] < arr[i]){
                return index;
            }
        }
        return 0;
    }
};