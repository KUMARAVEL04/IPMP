int Solution::threeSumClosest(vector<int> &A, int B) {
    stable_sort(A.begin(),A.end());
    long long minx=INT_MAX;
    long long maxx=INT_MIN;
    for(int i=0;i<A.size();i++){
        int low=i+1;
        int high = A.size()-1;
        while(low<high){
            long long sum = ((long long)A[i]+(long long)A[low]+(long long)A[high]);
            if(sum>B){
                high--;
                minx=min(minx,sum);
            }
            if(sum<B){
                low++;
                maxx=max(maxx,sum);
            }
            if(sum==B){
                return sum;
            }
        }
    }
    if(B-maxx>minx-B){
        return minx;
    }
    return maxx;
}
