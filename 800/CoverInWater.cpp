/*  21UEC005_Aryaman_Singh   */
#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <unordered_set>
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
        //check for 3 continuous dots and print 2 if there else print number of dots(empty cells)
        int n; cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        int maxLen=0;
        int dotCnt=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                cnt++;
                dotCnt++;
            }
            else{
                maxLen=max(maxLen,cnt);
                cnt=0;
            }
        }        
        maxLen=max(maxLen,cnt);
        if(maxLen<=2){
            cout<<dotCnt<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}