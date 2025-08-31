#include<iostream>
using namespace std;
int n, x, ans;
int main() {
  cin >> n >> x;
  for (int i = 1;i<=n;i++){
    int j = i;
    while(j){
      if (j % 10 == x){
        ans++;
      }
      j /= 10;
    }
  }
  cout << ans;
  return 0;
}