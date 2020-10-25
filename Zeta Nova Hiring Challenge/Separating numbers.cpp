#include <bits/stdc++.h>

using namespace std;

int calculateResult(vector<string> input){
    int ans = 0;
    for(int i= 0 ; i< input.size(); i++)
    {
        int ans = 0 ;
        string s=input[i];
        int len = s.size();
        bool flag = false;
        if(len==1)
          flag = true;
        for(int j=0; j < len-1;j++)
        {
          if(s[j]=='9' && s[j+1]=='9')
          {
              flag = true;
              break;
          }
 
        }
        int pow = 1;
        for(int j = 1; j<=i; j++)
        {
            pow = pow * 2;
        }
        if(flag)
        ans= ans + pow;

    }
     return ans;
}
int main(){
    int t;
    cin>>t;
    vector<string> input(t);
    for(int j = 0;j < t;j++){
        cin>>input[j];
    }
    int result;
    result = calculateResult(input);
    cout<<result;
    return 0;
}