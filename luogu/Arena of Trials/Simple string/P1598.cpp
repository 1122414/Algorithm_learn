#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// max_element(a + 1, a + 27) - a 获取的是最大值的位置
string s;
int a[30];
int main(){
  for (int i = 0;i<4;i++){
    getline(cin, s);
    for (int j = 0; j < s.length();j++){
      if(s[j]>='A' && s[j]<='Z'){
        a[int(s[j]) - 64]++;
      }
    }
  }
  
  int max_num = a[max_element(a + 1, a + 27) - a];
  int temp_max_num = max_num;
  for (int i = 1; i <= max_num; i++, cout << endl){
    for (int j = 1; j <= 26; j++){
      if(a[j]>=temp_max_num){
        j <= 25 ? cout << '*' << ' ' : cout << '*';
      }else{
        j <= 25 ? cout << "  " : cout << ' ';
      }
    }
    temp_max_num--;
  }
  for (int i = 1;i<=26;i++){
    i <= 25 ? cout << char(64 + i) << ' ' : cout << char(64 + i);
  }
  return 0;     
}

// #include<iostream>
// #include<algorithm>
// #include<string>
// using namespace std;
// int char_num[30];
// string s;
// int main() {
// 	while (cin >> s) {
// 		for (int i = 0; i < s.length(); i++) {
// 			if (s[i] >= 'A' && s[i] <= 'Z') {
// 				char_num[s[i] - 64]++;
// 			}
// 		}
// 	}
// 	int max_num = *max_element(char_num+1, char_num + 27);
// 	int temp_max = max_num;
// 	for (int i = 0; i <= max_num; i++, cout << endl) {
// 		if (temp_max == 0) {
// 			for (int j = 0; j <= 25; j++) {
// 				cout << char('A' + j) << ' ';
// 			}
// 			break;
// 		}
// 		for (int j = 1; j <= 26; j++) {
// 			if (char_num[j] == temp_max) {
// 				cout << "* ";
// 				char_num[j]--;
// 			}
// 			else {
// 				cout << "  ";
// 			}
// 		}
// 		temp_max--;
// 	}
// 	return 0;
// }