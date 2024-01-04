/*  21UEC005_Aryaman_Singh   */
#include <bits/stdc++.h>
#define loopf for(ll i=0;i<n;i++)
#define A ios_base::sync_with_stdio(false);
#define R cin.tie(NULL);
#define Y cout.tie(NULL);
#define tcs ll T;cin>>T;while(T--)
#define ll long long int
#define vecas vector<ll> v; for(ll i=0;i<n;i++) {ll x; cin>>x; v.push_back(x);}
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
     freopen("input.txt", "r", stdin);
     freopen("output.txt", "w", stdout);
    #endif
    A R Y
    tcs
    {
        //check if no decreasing subarray exist for k=1
        //check longest decreasing subarray and compare it with k
        int n,k;
        cin>>n>>k;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }  
        int cntOrder=0;
        int maxCnt=0;
        bool flag=false;
        for(int i=0;i<n-1;i++){
            if(vec[i]>vec[i+1] && k<=1){
                cntOrder++;
                flag=true;
            }
            else{
                maxCnt= max(maxCnt,cntOrder);
                cntOrder=0;
            }
        } 
        maxCnt= max(maxCnt,cntOrder);
        //cout<<maxCnt<<" ";
        if(flag || maxCnt>=k){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}