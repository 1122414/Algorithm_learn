#include<iostream>
using namespace std;
int a[15],x,ans;
int main(){
  for (int i = 1;i<=10;i++){
    cin>>a[i];
  }
  cin >> x;
  for (int i = 1;i<=10;i++){
    if(x+30>=a[i]){
      ans++;
    }
  }
  cout << ans;
  return 0;
}