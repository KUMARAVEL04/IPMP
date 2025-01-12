#include <vector>  
#include <iostream>
using namespace std;  
int main(){
    int m=0;
    int n=0;
    cin>>n;
    cin>>m;
    vector<vector<int>> mat;
    for(int i=0;i<m;i++){
        vector<int> row;
        for(int j=0;j<n;j++){
            int d;
            cin>>d;
            row.push_back(d);
        }
        mat.push_back(row);
    }
    int m1 = m;
    int n1 = n;
    int c=0;
    int r=0;
    int i=0;
    int j=0;
    while(r<n && c<n){
        
        for(i;i<n1;i++){
            cout<<mat[j][i]<<" ";
        }
        i--;
        j++;
        
        if(j==m1){
            cout<<endl;
            break;
        }
        for(j;j<m1;j++){
            cout<<mat[j][i]<<" ";
        }
        j--;
        i--;
        for(i;i>=c;i--){
            cout<<mat[j][i]<<" ";
        }
        i++;
        j--;
        for(j;j>r;j--){
            cout<<mat[j][i]<<" ";
        } 
        j++;
        i++;
        m1--;
        n1--;
        c++;
        r++;
        cout<<endl;
    }
    return 0;
}