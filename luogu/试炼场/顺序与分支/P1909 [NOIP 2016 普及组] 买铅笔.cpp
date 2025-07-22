#include<iostream>
using namespace std;
int n, a, b, ans=9999999;
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 1;i<=3;i++){
    cin >> a >> b;

    ans = n % a == 0 ? min(ans, (n / a) * b) : min(ans, (n / a + 1) * b);
  }
  cout << ans;
  cout.flush();
  return 0;
}