#include<iostream>
using namespace std;
int n, a[105], ans;
int main(){
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  for (int i = 1;i<=n;i++){
    ans = 0;
    for (int j = i;j>=1;j--){
      if(a[j]<a[i])
        ans++;
    }
    cout << ans << ' ';
  }
    return 0;
}