#include<iostream>
using namespace std;
int i, k;
double sum;
int main(){
  cin>>k;
  for (i = 1;sum<=k;i++){
    sum += 1 / (double)i;
  }
  cout<<i-1;
  return 0;
}

// #include<iostream>
// using namespace std;
// int main() {
// 	int k;
// 	double sum = 0;
// 	cin >> k;
// 	for (int i = 1;; i++) {
// 		sum += 1 / (double)i;
// 		if (sum > k) {
// 			cout << i;
// 			break;
// 		}	
// 	}
// 	return 0;
// }