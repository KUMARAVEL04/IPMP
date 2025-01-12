//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string removeUtil(string &s) {
        string a;
        int n =s.size();
        int flagx=0;
        for(int i=0;i<n;i++){
            char temp = s[i];
            int flag=0;
            while(i<n && s[i]==temp){
                i++;
                flag++;
            }
            if(flag==1){
                a+=temp;
            }
            else{
                flagx=1;
            }
            i--;
        }
        if(flagx==0){
            return a;
        }
        return removeUtil(a);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        s = ob.removeUtil(s);
        if (s.size() == 0)
            cout << "\"\"";
        else
            cout << s << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends