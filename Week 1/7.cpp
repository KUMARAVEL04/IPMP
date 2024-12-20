#include<algorithm>
#include<vector>
using namespace std;
int Solution::firstMissingPositive(vector<int> &A) {
    stable_sort(A.begin(),A.end());
    int flag=0;
    int i=0;
    for(i=0;i<A.size();i++){
        if(A[i]>0){
            flag++;
            if(A[i]>1 && A[i-1]<1){
                return 1;
            }
            if(A[i]>1 && A[i-1]!=A[i]-1){
                return A[i-1]+1;
            }
        }
    }
    if(flag==0){
        return 1;
    }
    else{
        return A[i-1]+1;
    }
}
