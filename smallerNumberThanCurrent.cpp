class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int>counts (n, 0);
        for(int i=0; i<n; i++){
            int count = 0;
            for(int j= 0; j<n; j++){
                if(nums[i] > nums[j]){
                    count++;
                    counts[i] = count;
                }
            }
        }
        
        return counts;
    }
};
