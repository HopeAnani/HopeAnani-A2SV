class Solution {
public:
    int minPairSum(vector<int>& nums) {
        vector<int>sums;
        sort(nums.begin(),nums.end());
        int half = nums.size()/2;
        int x = 0;
        int y = nums.size()-1;
        while(x < half){
             int sum = nums[x] + nums[y];
             sums.push_back(sum);
             x++;
             y--;
        }
        int max = sums[0];
        for(int i=0; i<sums.size()-1; i++){
            if(sums[i] > max)
                max = sums[i];
        }
        return max;
    }
};
