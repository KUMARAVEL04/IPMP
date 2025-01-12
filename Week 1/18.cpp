//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& nums) {
        int a=0;
        int b=0;
        int c=0;
        for(int num: nums){
            if(num==0){
                a++;
                
            }
            if(num==1){
                b++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<a){
                nums[i]=0;
            }
            else if(i<a+b){
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends