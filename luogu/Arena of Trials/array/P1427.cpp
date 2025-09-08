#include<iostream>
#define ll long long int
using namespace std;
ll x=1, a[105], a_len;
int main() {
  for (int i = 1;x!=0;i++){
    cin >> x;
    a[i] = x;
    a_len++;
  }
  for(int i=a_len - 1;i>=1;i--){
    cout << a[i] << " ";
  }
  return 0;
}

// #define ll long long int
// #include<iostream>
// using namespace std;
// ll n = 0, num,a[105];
// int main() {
// 	while (cin >> n) {
// 		if (n == 0)break;
// 		a[num++] = n;
// 	}
// 	num -= 1;
// 	for (int i = num; i >= 0; i--) {
// 		cout << a[i] << ' ';
// 	}
// 	return 0;
// }