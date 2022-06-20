// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
#include <bits/stdc++.h>
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    if (n < 100) return false;
	    string str2 = to_string(n*2);
	    string str3 = to_string(n*3);
	    string str1 = to_string(n);
	    string str = str1+str2+str3;
	    sort(str.begin(),str.end());
	    //if (str[0]=='1' && str[str.length()-1]=='9') return true;
	    if (str == "123456789") return true;
	    else
	    return false;
	    
	    
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}  // } Driver Code Ends