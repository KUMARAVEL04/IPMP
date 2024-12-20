class Solution {
public:
    int titleToNumber(string columnTitle) {
        int r=0;
        for(int i=0;i<columnTitle.length();i++){
            int temp = columnTitle[i]-64;
            r=r*26+temp;
        }   
        return r;
    }
};