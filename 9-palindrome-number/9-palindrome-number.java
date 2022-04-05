class Solution 
{
    public boolean isPalindrome(int x) 
    {
        if (x < 0) 
			return false;
		if (x < 10) 
			return true;
        int reverse = 0,temp=x;
    while( x != 0 )
    {
       reverse = reverse * 10 + x % 10;
       x = x/10;
    }
    if (reverse==temp )
        return true;
    else 
        return false;
    
    }
}