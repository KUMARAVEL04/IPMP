//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    //Already did this during endsems
    vector<int> search(string& pat, string& txt) {
        int n = txt.length();
        int m = pat.length();
        vector<int> lps(m);
        vector<int> a;
        lpsconv(pat, lps);
        int i = 0;
        int j = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
                if (j == m) {
                    a.push_back(i - j);
                    j = lps[j - 1];
                }
            }
            else {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
        return a;
    }
    void lpsconv(string &pat, vector<int> &lps) {
        int n = 0;
        lps[0] = 0;
        int i = 1;
        while (i < pat.length()) {
            if (pat[i] == pat[n]) {
                n++;
                lps[i] = n;
                i++;
            }
            else {
                if (n != 0) {
                    n = lps[n - 1];
                }
                else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector<int> res = ob.search(pat, S);
        if (res.size() == 0)
            cout << "[]" << endl;
        else {
            for (int i : res)
                cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}

// } Driver Code Ends