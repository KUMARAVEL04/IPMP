class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        long long x=0;
        int flag=1;
        int l=0;
        int of=0;
        while(s[l]==' '){
            l++;
        }
        cout<<l<<endl;
        if(s[l]=='-'||s[l]=='+'){
            if(s[l]=='-'){
                flag=-1;
            }
            for(int i=l+1;i<n;i++){
                cout<<x<<endl;
                if(x>2147483647){
                    x =2147483647;
                    of++;
                    break;
                }
                if(s[i]>=48 && s[i]<=57){
                    x=x*10+(s[i]-48);
                }
                else{
                    break;
                }
            }
        }
        else if((s[l]>=48 && s[l]<=57)){
            for(int i=l;i<n;i++){
                cout<<x<<endl;
                if(x>2147483647){
                    x =2147483647;
                    of++;
                    break;
                }
                if(s[i]>=48 && s[i]<=57){
                    x=x*10+(s[i]-48);
                }
                else{
                    break;
                }
            }
        }
        else{
            return 0;
        }
        if(x>2147483647){
            x =2147483647;
            of++;
        }
        if(flag==-1 && x == 2147483647 && of!=0){
            x++;
        }
        return flag*x;
    }
};