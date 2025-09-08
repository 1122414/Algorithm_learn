#include<iostream>
#include<string>
using namespace std;
int n;
string s1,s2;
// 注意字符串要分配空间才能 s[i] = 赋值
int main(){
  cin >> n >> s1;
  for (int i = 0;i<s1.length();i++){
    s2.push_back(char((s1[i] - 'a' + n) % 26 + 'a'));
  }
  cout << s2 <<endl;
  return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;
// int main() {
// 	int n;
// 	string s1, s2;
// 	cin >> n >> s1;
// 	s2 = s1;
// 	for (int i = 0; i < s1.length(); i++) {
// 		char now_char = char((int(s1[i])-97 + n) % 26 + 97);
// 		s2[i] = now_char;
// 	}
// 	cout << s2;
// 	return 0;
// }
