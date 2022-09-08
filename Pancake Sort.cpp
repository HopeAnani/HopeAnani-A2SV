class Solution {
public:
    void flip(vector<int>& arr, int x){
        for(int i=0; i<= x/2; i++){
            int temp = arr[i];
            arr[i] = arr[x-i];
            arr[x-i] = temp;
        }
    }
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> result;
        for(int i=arr.size()-1; i > 0; i--){
            for(int j=1; j<=i; j++){
                if(arr[j]==i+1){
                    flip(arr, j);
                    result.push_back(j+1);
                    break;
                }
            }
            flip(arr,i);
            result.push_back(i+1);
        }
        return result;
    }
};
