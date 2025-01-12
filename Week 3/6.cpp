class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int last=0;
        while(i<n){
            if(s[i]==' '||s[i]=='\n'){
                reverse(s.begin()+last,s.begin()+i);
                last=i+1;
            }
            i++;
        }
        reverse(s.begin()+last,s.begin()+i);
        return s;
    }
};