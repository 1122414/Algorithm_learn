#include<iostream>
#include<string>
using namespace std;
string s1,s2,type="integer";
int double_index, fraction_index;
void reverse_integer(string ss){
  int back_zero_num = 0;
  int front_zero_num = 0;
  if(ss.length()==1){
      cout << ss;
  }else{
    for (int i = ss.length() - 1;i>=0;i--){
      if(ss[i]=='0'){
        back_zero_num++;
      }else{
        break;
      }
    }
    // 小数特殊处理
    for (int i = 0; i < ss.length(); i++){
      if(ss[i]=='0'){
        front_zero_num++;
      }else{
        break;
      }
    }
    if (front_zero_num != 0){
      for (int i = ss.length() - 1; i >= front_zero_num; i--)
      {
        cout << ss[i];
      }
      return;
    }

    if (back_zero_num != 0){
      for (int i = ss.length() - back_zero_num - 1; i >= 0; i--)
      {
        cout << ss[i];
      }
    }
    else{
      for (int i = ss.length() - 1; i >= 0; i--)
      {
        cout << ss[i];
      }
    }
  }
}

int main(){
  cin >> s1;
  // 判断是什么类型的
  for (int i = 0; i < s1.length();i++){
    if(s1[i] == '.'){
      type = "double";
      double_index = i;
      break;
    }else if (s1[i] == '/'){
      type = "fraction";
      fraction_index = i;
      break;
    }else if (s1[i] == '%'){
      type = "percentage";
      break;
    }
  }

  if(type == "integer"){
    reverse_integer(s1);
  }else if (type == "double"){
    string s_front = s1.substr(0, double_index);
    string s_back = s1.substr(double_index + 1);
    reverse_integer(s_front);
    cout << '.';
    reverse_integer(s_back);
  }else if (type == "fraction"){
    string s_front = s1.substr(0, fraction_index);
    string s_back = s1.substr(fraction_index + 1);
    reverse_integer(s_front);
    cout << '/';
    reverse_integer(s_back);
  }else{
    string ss = s1.substr(0, s1.length() - 1);
    reverse_integer(ss);
    cout << '%';
  }
  return 0;
}

// #include<iostream>
// #include<string>
// using namespace std;
// string s, stemp1, stemp2, sultimate;
// int type = 1, aim_index = 0,flag_zero;
// void reverse(string ss) {
// 	for (int i = ss.length() - 1; i >= 0; i--) {
// 		if (ss[i] == '0' && flag_zero == 0) {
// 			continue;
// 		}
// 		flag_zero = 1;
// 		sultimate += ss[i];
// 	}
// }
// int main() {
// 	cin >> s;
// 	if (s.length() == 1 && s[0] == '0') {
// 		cout << 0;
// 		return 0;
// 	}
// 	else if (s == "0.0") {
// 		cout << "0.0";
// 		return 0;
// 	}
// 	else if (s == "0%") {
// 		cout << "0%";
// 		return 0;
// 	}

// 	if (s.find('.') != -1) {
// 		type = 2;
// 	}
// 	else if (s.find('/') != -1) {
// 		type = 3;
// 	}
// 	else if (s.find('%') != -1) {
// 		type = 4;
// 	}
// 	else {
// 		type = 1;
// 	}
// 	switch (type)
// 	{
// 	case 1:
// 		reverse(s);
// 		cout << sultimate;
// 		break;
// 	case 2:
// 		aim_index = s.find('.');
// 		stemp1 = s.substr(0, aim_index);
// 		stemp2 = s.substr(aim_index + 1);
// 		reverse(stemp1);
// 		sultimate += '.';
// 		reverse(stemp2);
// 		if (sultimate[sultimate.length() - 1] == '0') {
// 			sultimate.erase(sultimate.length() - 1);
// 		}
// 		sultimate[sultimate.length() - 1] == '.' ? cout << sultimate + '0' : cout << sultimate;
// 		break;
// 	case 3:
// 		aim_index = s.find('/');
// 		stemp1 = s.substr(0, aim_index);
// 		stemp2 = s.substr(aim_index + 1);
// 		for (int i = stemp2.length() - 1; i >= 0; i--) {
// 			if (stemp2[i] == '0') {
// 				stemp2.erase(i);
// 			}
// 			else {
// 				break;
// 			}
// 		}
// 		if (stemp1 != "0") {
// 			reverse(stemp1);
// 		}
// 		else {
// 			sultimate += '0';
// 		}

// 		sultimate += '/';
// 		reverse(stemp2);
// 		cout << sultimate;
// 		break;
// 	case 4:
// 		s.erase(s.length() - 1);
// 		reverse(s);
// 		sultimate.length() != 0 ? cout << sultimate << '%' : cout << 0;
// 		break;
// 	default:
// 		break;
// 	}
// 	return 0;
// }


//#include<iostream>
//#include<string>
//using namespace std;
//int flag;
//int main()
//{
//	int a, b, l;
//	string s, str1, str2;
//	cin >> s;
//	for (int i = 0; i < s.length(); i++)
//		if (s[i] == '.' || s[i] == '/' || s[i] == '%')
//		{
//			flag = i;
//			break;
//		}
//	if (flag == 0 || s[flag] == '%')
//	{
//		s[flag] == '%' ? l = s.length() - 2 : l = s.length() - 1;
//		while (s[l] == '0' && l > 0)l--;
//		for (int i = l; i >= 0; i--)
//			cout << s[i];
//		if (s[flag] == '%')cout << '%';
//	}
//	if (s[flag] == '.' || s[flag] == '/')
//	{
//		str1 = s.substr(0, flag), str2 = s.substr(flag + 1, s.length() - flag - 1);
//		a = stoi(str1), b = stoi(str2);
//		if (a != 0) {
//			while (a % 10 == 0)
//				a /= 10;
//			while (a != 0)
//				cout << a % 10, a /= 10;
//		}
//		else cout << 0;
//		s[flag] == '.' ? cout << '.' : cout << '/';
//		if (b != 0) {
//			if (s[flag] == '/') {
//				while (b % 10 == 0)
//					b /= 10;
//				while (b != 0)
//					cout << b % 10, b /= 10;
//			}
//			else
//				while (b != 0)
//					cout << b % 10, b /= 10;
//		}
//		else cout << 0;
//	}
//	return 0;
//}