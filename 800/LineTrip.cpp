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
        //check maximum distance between 2 points and include the 2*(x-vec[n-1]) also
        int n,x;
        cin>>n>>x;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        int maxDist=0;
        for(int i=0;i<n-1;i++){
            maxDist = max(maxDist,vec[i+1]-vec[i]);
        }
        cout<<max({maxDist,vec[0],2*(x-vec[n-1])})<<endl;        
    }
    return 0;
}