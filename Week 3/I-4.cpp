int Solution::removeDuplicates(vector<int> &A) {
    int x=0;
    int a[2];
    int n=A.size();
    for(int i=0;i<A.size();i++){
        int y = A[i];
        int flag=0;
        while(A[i]==y && i<n){
            flag++;
            i++;
        }
        i--;
        A[x]=y;
        x++;
        if(flag>1){
            A[x]=y;
            x++;
        }
    }
    return x;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
