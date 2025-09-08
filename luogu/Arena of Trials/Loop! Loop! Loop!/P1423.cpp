#include<iostream>
using namespace std;
int i;
double s, sum;
int main(){
  cin>>s;
  double now = 2;
  for (i = 0;sum<=s;i++){
    sum += now;
    now *= 0.98;
  }
  cout << i;
  return 0;
}

// #include<iostream>
// using namespace std;
// int main() {
// 	double s, now=2, sum = 0;
// 	cin >> s;
// 	for (int i=1;; i++) {
// 		sum += now;
// 		if (sum >= s) {
// 			cout << i;
// 			break;
// 		}
// 		now *= 0.98;
// 	}
// 	return 0;
// }