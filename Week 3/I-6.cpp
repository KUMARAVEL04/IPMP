void Solution::sortColors(vector<int> &A) {
    int arr[3]={0,0,0};
    int n=A.size();
    for(int i=0;i<n;i++){
        arr[A[i]]++;
    }
    for(int i=0;i<n;i++){
        if(arr[0]>0){
            arr[0]--;
            A[i]=0;
        }else if(arr[1]>0){
            arr[1]--;
            A[i]=1;
        }
        else{
            arr[2]--;
            A[i]=2;
        }
    }

    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
