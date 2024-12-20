class Solution {
public:
    string convertToTitle(int columnNumber) {
        string s="";
        while(columnNumber){
            columnNumber--;
            int rem=columnNumber%26;
            columnNumber/=26;
            s=char(rem+65)+s;
        }
        return s;
    }
};