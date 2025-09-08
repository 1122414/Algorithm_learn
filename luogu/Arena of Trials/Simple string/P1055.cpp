#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int num[15], num_num = 1, last_num=0;
string s;
char s_last = ' ';
int main(){
  cin>>s;
  for (int i = 0;i<s.length();i++){
    if(s[i]!='-'){
      num[num_num++] = int(s[i]) - 48;
    }
  }
  s_last = s[s.length() - 1];

  for (int i = 1; i <= 9; i++){
    last_num += num[i] * i;
  }
  int last_digit = last_num % 11;
  if (last_digit != 10){
    if(int(s_last)-48 == last_digit){
      cout << "Right";
    }else{
      for (int i = 0;i<s.length()-1;i++)
        cout << s[i];
      cout << last_digit;
    }
  }else{
    if(s_last == 'X'){
      cout << "Right";
    }else{
      for (int i = 0;i<s.length()-1;i++)
        cout << s[i];
      cout << 'X';
    }
  }
  return 0;
}


// #include<iostream>
// #include<string>
// using namespace std;
// int num, now=1;
// int main() {
// 	string ISBN;
// 	cin >> ISBN;
// 	for (int i = 0; i < ISBN.length() - 2; i++) {
// 		if (ISBN[i] != '-') {
// 			num += (int(ISBN[i]) - 48) * now;
// 			now++;
// 		}
// 	}
// 	num = num % 11;
// 	if (num == 10 ) {
// 		if(ISBN[ISBN.length() - 1]== 'X')
// 			cout << "Right";
// 		else{
// 			ISBN[ISBN.length() - 1] = 'X';
// 			cout << ISBN;
// 		}
// 	}
// 	else {
// 		if (int(ISBN[ISBN.length() - 1])-48 == num)
// 			cout << "Right";
// 		else {
// 			ISBN[ISBN.length() - 1] = num + 48;
// 			cout << ISBN;
// 		}
// 	}
// 	return 0;
// }

// //#include<iostream>
// //#include<string>
// //using namespace std;
// //int main()
// //{
// //	string s;
// //	cin >> s;
// //	int sum = 0, index = 1;
// //	for (int i = 0; i < s.length() - 1; i++) {
// //		if (s[i] != '-') {
// //			sum += (s[i] - '0') * index;
// //			index++;
// //		}
// //	}
// //	int check = 0;
// //	if (s[s.length() - 1] == 'X') {
// //		check = 10;
// //	}
// //	else {
// //		check = s[s.length() - 1] - '0';
// //	}
// //	if (sum % 11 == check) {
// //		cout << "Right";
// //	}
// //	else {
// //		for (int i = 0; i < s.length() - 1; i++) {
// //			cout << s[i];
// //		}
// //		sum % 11 == 10 ? cout << "X" : cout << sum % 11;
// //	}
// //	return 0;
// //}