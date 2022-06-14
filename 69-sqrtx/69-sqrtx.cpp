class Solution {
public:
    int mySqrt(int x) {
      int s = 1 , e = x;
     int ans = -1;
        if (x==0) return 0;
        while (s<=e){
            int mid = s + (e-s)/2;
            if (mid > x/mid)
                e = mid-1;
            else{
                s=mid+1;
                ans = mid;
            }
        }
        return ans;
    }
};