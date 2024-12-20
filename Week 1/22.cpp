class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long r=0;
        long temp=x;
        while(temp!=0){
            int rem = temp%10;
            temp = temp/10;
            r=r*10+rem;
        }
        if(r-x){
            return false;
        }
        else{
            return true;
        }
    }
};