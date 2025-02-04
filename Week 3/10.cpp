class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 =s.size();
        int n2 =t.size();
        if(n1!=n2){
            return false;
        }
        unordered_map<char,int> map;
        for(int i=0;i<n1;i++){
            map[s[i]]++;
        }
        for(int i=0;i<n1;i++){
            map[t[i]]--;
        }
        for(auto x: map){
            if(x.second!=0){
                return false;
            }
        }
        return true;
    }
};

