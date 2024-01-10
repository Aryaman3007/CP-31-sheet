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
        //check if there are more than 1 odd character occurences after removing k elements, if there are then print "NO" else "YES"
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            if((it.second%2) !=0){
                cnt++;
            }
        }
        if(k<cnt-1) cout<<"NO\n";
        else cout<<"YES\n";
        
    }
    return 0;
}