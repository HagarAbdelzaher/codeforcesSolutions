#include <iostream>
#include <bits/stdtr1c++.h>
using namespace std;
#define ll  long long
#define ld long double
#define pb push_back
#define INF 0x3f3f3f3f
//#define for(i,n) for(int i = 0 ; i < n ; i++)
#define vi vector<int>
#define print(el) cout<<(el)<<endl;
//    freopen ("input.txt", "r", stdin);
//    freopen ("output.txt", "w", stdout);

const int N = int(1e5 + 3);
const long double PI = 3.1415926536;
ll a[int(1e6)];
ll s[int(1e6)];
//vector<ll> vis;

//int sum[int(1e6)];

int main()
{
   int n , fix=0 , x=0;
   cin>>n;
   for(int i=0 ; i<n ; i++)
   {
       cin>>a[i];
   }
   for(int i=0 ; i<n ; i++)
   {
       if (a[i]==i)
        fix++;
       else if (a[a[i]]==i)
        x++;
   }
if(x>0)
    fix+=2;
else if(fix!=n)
    fix+=1;
cout<<fix;
}
 
