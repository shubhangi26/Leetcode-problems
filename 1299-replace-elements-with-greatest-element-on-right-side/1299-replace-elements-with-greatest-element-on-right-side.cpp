class Solution {
public:
    //VARITION OF LEADERS IN AN ARRAY
    vector<int> replaceElements(vector<int>& arr) {
     int n=arr.size(),temp,mx=-1;
        //Iterating from right check if current element is greater than leader(mx)
     for(int i=n-1;i>=0;i--)
     {
        temp=arr[i];
        arr[i]=mx;
        mx=max(mx,temp);
     }
    return arr;   
    }
};