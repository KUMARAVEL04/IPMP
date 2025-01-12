int Solution::removeDuplicates(vector<int> &A) {
    set<int> set;
    for(int i=0;i<A.size();i++){
        set.insert(A[i]);
    }
    int i=0;
    for(auto data: set){
        A[i]=data;
        i++;
    }
    return set.size();
}
