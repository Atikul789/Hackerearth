#include <bits/stdc++.h>

using namespace std;
int interval[2000006];
int isPossible(int n,vector<int> start,vector<int> end){
 
    for(int i = 0 ; i<start.size(); i++)
    {
        if(start[i]<=100000)
        interval[start[i]]++;
       
    }
    for(int i = 0 ;i< end.size(); i++)
    {
        if(end[i]<=100000)
         interval[end[i]+1]--;
    }
    for(int i =2 ; i<=100000; i++)
    {
        interval[i] = interval[i] + interval[i-1];
    }
    int ans  = 1;
    for(int i = 1; i<=100000; i++)
    {
        if(interval[i]>=3)
        {
            ans = 0;
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> start(n);
    for(int j = 0;j < n;j++){
        cin>>start[j];
    }
    vector<int> end(n);
    for(int j = 0;j < n;j++){
        cin>>end[j];
    }
    int result;
    result = isPossible(n,start,end);
    cout<<result;
    return 0;
}