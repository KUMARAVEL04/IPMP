class Solution {
public:
    string reverseStr(string s, int k) {
        string s1;
        int n = s.size();
        for(int i=0;i<n;i+=2*k){
            if(n-i<k){
                for(int j=min(i+2*k,n-1);j>=i;j--){
                    s1+=s[j];
                    cout<<s[j];
                }   
            }else{
                for(int j=min(i+k-1,n-1);j>=i;j--){
                    s1+=s[j];
                    cout<<s[j];
                }
                cout<<"*";
                for(int j=i+k;j<min(i+2*k,n);j++){
                    s1+=s[j];
                    cout<<s[j];
                }
            }
            
            cout<<endl;
        }
        cout<<endl;
        return s1;
    }
};