class Solution {
public:
    bool Arthimetic(vector<int>&Arth){
        int n = Arth.size();
        if(n==2)
            return true;
        int d = Arth[1] - Arth[0];
        for(int i=2; i<n; i++){
            if(Arth[i] - Arth[i-1] != d)
                return false;
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size();
        vector<bool>answer;
        for(int i=0; i<m; i++){
            int x = l[i], y = r[i];
            vector<int>Arth;
            for(int j=x; j<=y; j++){
                Arth.push_back(nums[j]);
            }
            sort(Arth.begin(),Arth.end());
            if(Arthimetic(Arth))
                answer.push_back(true);
            else
                answer.push_back(false);
        }
        return answer;
    }
};
