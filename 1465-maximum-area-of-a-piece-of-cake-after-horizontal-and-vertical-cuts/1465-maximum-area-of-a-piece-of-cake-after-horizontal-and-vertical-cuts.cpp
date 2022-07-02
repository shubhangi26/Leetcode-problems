class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        //adding boundaries for easy calulations
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        //sorting 
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        //we want maxh and maxw
        long maxh=horizontalCuts[0],maxw=verticalCuts[0];
        for(int i=1;i<horizontalCuts.size();i++)
        {
            if(maxh<horizontalCuts[i]-horizontalCuts[i-1])
            {
                maxh=horizontalCuts[i]-horizontalCuts[i-1];
            }
        }
        for(int i=1;i<verticalCuts.size();i++)
        {
            if(maxw<verticalCuts[i]-verticalCuts[i-1])
            {
                maxw=verticalCuts[i]-verticalCuts[i-1];
            }
        }
        
        
        return (maxh*maxw)%(1000000007);
    }
};