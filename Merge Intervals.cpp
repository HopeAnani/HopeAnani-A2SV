class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>>answer;
        
        for(int i=0; i<intervals.size(); i++){
            if(answer.empty()){
                answer.push_back(intervals[i]);
            }
            
            else{
                vector<int>&v = answer.back();
                int y = v[1];
                
                if(intervals[i][0]<= y){
                    v[i] = max(y,intervals[i][1]);
                }
                
                else{
                    answer.push_back(intervals[i]);
                }
            }
        }
        
        return answer;
    }
};
