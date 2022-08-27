#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
const int N=1e5+5;
int n;
int a[N];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    ll ans=0;
    for(int i=0;i<n;i++) ans+=a[i]*(n-i-1);
    printf("%lld",ans);
}