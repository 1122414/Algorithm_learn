#include<iostream>
using namespace std;
int n,ans,temp,a[105],num[20005];
int main(){
  cin>>n;
  for (int i = 1;i<=n;i++){
    cin >> temp;
    a[i] = temp;
    num[temp] = 1;
  }
  for (int i = 1;i<=n;i++){
    for (int j = i+1;j<=n;j++){
      if(num[a[i] + a[j]]){
        ans++;
        num[a[i] + a[j]] = 0;
      }
    }
  }
  cout << ans;
  return 0;
}