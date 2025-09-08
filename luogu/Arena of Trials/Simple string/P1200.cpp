#include<iostream>
#include<string>
#include<cstring>
#define ll long long int
using namespace std;
string a, b;
ll a_num = 1, b_num = 1;
int main(){
  cin >> a >> b;
  // cout << int('A');
  for (int i = 0;i<a.length();i++){
    a_num *= int(a[i]) - 64;
  }
  for (int i = 0;i<b.length();i++){
    b_num *= int(b[i]) - 64;
  }
  a_num % 47 == b_num % 47 ? cout << "GO" : cout << "STAY";
  return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;
// string A, B;
// int numA = 1, numB = 1;
// int main() {
// 	cin >> A >> B;
// 	for (int i = 0; i < A.length(); i++) {
// 		numA *= int(A[i]) - 64;
// 	}
// 	for (int i = 0; i < B.length(); i++) {
// 		numB *= int(B[i]) - 64;
// 	}
// 	if (numA % 47 == numB % 47) {
// 		cout << "GO";
// 	}
// 	else {
// 		cout << "STAY";
// 	}
// 	return 0;
// }

//#include<iostream>
//using namespace std;
//int main()
//{
//	int ans1 = 1, ans2 = 1;
//	string str1, str2;
//	cin >> str1 >> str2;
//	for (int i = 0; i < str1.length(); i++)	ans1 *= str1[i] - '@';
//	for (int i = 0; i < str2.length(); i++)	ans2 *= str2[i] - '@';
//	ans1 % 47 == ans2 % 47 ? cout << "GO" : cout << "STAY";
//	return 0;
//}