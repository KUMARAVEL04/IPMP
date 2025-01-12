vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    int low1=0;
    int low2=0;
    int n1=A.size();
    int n2=B.size();
    vector<int> nex;
    while(low1<n1 && low2<n2){
        if(A[low1]<B[low2]){
            low1++;
        }else if(A[low1]>B[low2]){
            low2++;
        }else{
            nex.push_back(A[low1]);
            low2++;
            low1++;
        }
    }
    return nex;
}
