class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int, int> count;
        vector<int> answer;
        vector<int> empty;
        int n = changed.size();
        sort(changed.begin(), changed.end());
        for(int i=0; i<changed.size(); i++){
            count[changed[i]]++;
        }
        for(int i=0; i<changed.size(); i++){
            int y= count[changed[i]];
            if(y>0){
                int z= changed[i]*2;
                answer.push_back(changed[i]);
                count[changed[i]]--;
                count[z]--;
            }
        }
        if(answer.size()== n/2)
            return answer;
        return empty;
    }
};
