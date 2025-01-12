void Solution::merge(vector<int> &A, vector<int> &B) {
    if(B.size()>A.size()){
        B.swap(A);
    }
    for(int x : B){
        A.push_back(x);
    }
    sort(A.begin(),A.end());
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
