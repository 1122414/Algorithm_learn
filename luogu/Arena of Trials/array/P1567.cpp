#include<iostream>
#define ll long long int
using namespace std;
ll n, ans, ans_temp, temp, last_num = -1;
int main(){
  cin>>n;
  for (int i = 1; i <= n; i++){
    cin >> temp;
    if(temp>last_num){
      ans_temp++;
      ans = max(ans, ans_temp);
    }else{
      ans_temp = 1;
    }
    last_num = temp;
  }
  cout << ans;
  return 0;
}

// #include<iostream>
// using namespace std;
// int ans_temp, ans, is_up;
// int main() {
// 	int n, temp=0xfffff, last_num = 0;
// 	cin >> n;

// 	for (int i = 1; i <= n; i++) {
// 		last_num = temp;
// 		cin >> temp;
// 		if (temp > last_num) {
// 			ans_temp++;
// 			ans = max(ans, ans_temp);
// 		}
// 		else {
// 			ans_temp = 0;
// 		}
// 	}
// 	cout << ans + 1;
// 	return 0;
// }

