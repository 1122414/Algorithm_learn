#include<iostream>
using namespace std;
int l, m, ll[10005], ans;
int main(){
  cin >> l >> m;
  for (int i = 1; i <= m; i++){
    int x, y;
    cin >> x >> y;
    for (int j = x;j<=y;j++){
      ll[j] = 1;
    }
  }
  for(int i = 0;i<=l;i++){
    if(ll[i] == 0)
      ans++;
  }
  cout << ans;
  return 0;
}

// #include<iostream>
// using namespace std;
// int l, m, u, v, num, a[10005];
// int main() {
// 	cin >> l >> m;
// 	for (int i = 0; i < m; i++) {
// 		cin >> u >> v;
// 		for (int j = u; j <= v; j++) {
// 			a[j] = 1;
// 		}
// 	}
// 	for (int i = 0; i <= l; i++) {
// 		if (a[i] == 0) {
// 			num++;
// 		}
// 	}
// 	cout << num;
// 	return 0;
// }