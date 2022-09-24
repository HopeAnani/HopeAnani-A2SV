class Solution {
public:
    int maxArea(vector<int>& height) {
        int maximumArea = 0;
        long long area = 0;
        
        int h1 = 0;
        int h2 = height.size() - 1;
        
        while(h1 != h2)
        {
            long long minHeight = min(height[h1], height[h2]);
            
            area = (h2 - h1) * minHeight;
            
            if(area > maximumArea)
                maximumArea = area;
            
            if(height[h1] > height[h2])
                h2--;
                
            else
                h1++;
        }
                
        return maximumArea;
    }
};
