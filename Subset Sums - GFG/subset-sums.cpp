// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    void helper (int ind,vector<int> &arr, int sum,vector<int> &res,int N){
        if (ind==N) {
            res.push_back(sum);
            return ;
        }
        helper(ind+1,arr,sum+arr[ind],res,N);
       
        helper(ind+1,arr,sum,res,N);
        
    }
    public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector <int> res; 
        helper(0,arr,0,res,N);
        sort(res.begin(),res.end());
        return res;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends