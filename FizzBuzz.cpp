class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>answer;
        
        for(int i=1; i<=n; i++){
            string ans;
            if(i%15 == 0)
                ans+="FizzBuzz";
            else if(i%5 == 0)
                ans+="Buzz";
            else if(i%3 == 0)
                ans+="Fizz";
            else ans=to_string(i);
           
            answer.push_back(ans);
        }
       
   return answer;}
};