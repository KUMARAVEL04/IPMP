class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max2 =0;
        int n = s.size();
        if(s.size()<2){
            return s.size();
        }
        for(int i=0;i<n;i++){
            set<char> set;
            int l=i;
            while(l<n){
                if(set.count(s[l])==0){
                    set.insert(s[l]);
                }
                else{
                    int x = set.size();
                    max2 = max(max2 , x);
                    break;
                }
                l++;
            }
            int x = set.size();
            max2 = max(max2 , x);
        }
        return max2;
    }
};