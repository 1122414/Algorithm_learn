#include<iostream>
using namespace std;
int n, start = 0, endd = 0, m_all = 0;
int main(){
  for (int i = 1;i<=12;i++){
    cin>>n;
    start = 300 + endd;
    if(start>=n){
      start -= n;
      if(start<0){
        cout << "-" << i;
        return 0;
      }
      int store = start / 100 * 100;
      endd = start - store;
      m_all += store;
    }else{
      cout << "-" << i;
      return 0;
    }
  }
  cout << m_all * 1.2 + endd;
  return 0;
}

// #include<iostream>
// using namespace std;
// int main() {
// 	int month_money, last_money = 0, mathor_money = 0;
// 	for (int i = 1; i <= 12; i++) {
// 		cin >> month_money;
// 		last_money += 300 - month_money;
// 		if (last_money < 0) {
// 			cout << '-' << i;
// 			return 0;
// 		}
// 		if (last_money >= 100) {
// 			mathor_money += last_money / 100 * 100;
// 			last_money %= 100;
// 		}
// 	}
// 	cout << mathor_money * 1.2 + last_money;
// 	return 0;
// }