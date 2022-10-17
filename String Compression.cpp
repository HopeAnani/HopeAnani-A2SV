class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
  
        int j = 0;
        
        int i = 0;
        
        while(i < n)
        {   
            int count = 1;
            
            while(i + 1 < n && chars[i] == chars[i + 1])
            {
                count++;
                
                i++;
            }
            
            if(count == 1)
            {
                chars[j++] = chars[i];
            }
            else
            {
                chars[j++] = chars[i];
                
                string str = to_string(count);
                
                for(int k = 0; k < str.size(); k++)
                {
                    chars[j++] = str[k];
                }
            }
            
            i++;
        }
        
        return j;
    }
};
