#include<iostream>
#include<string>
using namespace std;
struct word_list
{
  /* data */
  string word;
  int index;
};
word_list wl[500005];

int word_num, aim_num, first_index;
string aim, text;

void lower(string &a) {
	for (int i = 0; i < a.length(); i++) {
		a[i] = tolower(a[i]);
	}
}

int main(){
  cin >> aim;
  getchar();
  getline(cin, text);
  lower(aim);
	lower(text);
  int first_flag = 1;
  for (int i = 0;i<text.length();i++){
    if (text[i]!=' '){
      wl[word_num].word += text[i];
      if(first_flag == 1){
        wl[word_num].index = i;
        first_flag = 0;
      }
    }else{
      word_num++;
      first_flag = 1;
    }
  }

  first_flag = 1;
  for (int i = 0;i<=word_num;i++){
    if(wl[i].word==aim){
      aim_num++;
      if (first_flag==1){
        first_index = wl[i].index;
        first_flag = 0;
      }
    }
  }
  if (aim_num==0){
    cout << -1;
    return 0;
  }
  cout << aim_num << ' ' << first_index;
  return 0;
}


// #include<iostream>
// #include<string>
// using namespace std;
// string aim, text;
// int flag, word_num, word_location;
// void lower(string &a) {
// 	for (int i = 0; i < a.length(); i++) {
// 		a[i] = tolower(a[i]);
// 	}
// }
// int main() {
// 	cin >> aim;
// 	getchar();
// 	getline(cin, text);
// 	lower(aim);
// 	lower(text);
// 	for (int i = 0; i < text.length(); i++) {
// 		if (text[i] == aim[0]) {
// 			int j = 0;
// 			for (j = 0; j < aim.length(); j++) {
// 				if (i + j<text.length() && text[i + j] != aim[j]) {
// 					break;
// 				}
// 			}
// 			if (j == aim.length() && text[i + j] == ' ' && i-1>=0 && text[i-1]==' ') {
// 				if (flag == 0) {
// 					word_location = i;
// 					flag = 1;
// 				}
// 				word_num++;
// 				i += j;
// 			}
// 		}
// 	}
// 	word_num == 0 ? cout << -1 : cout << word_num << ' ' << word_location;
// 	return 0;
// }


//#include<iostream>
//#include<string>
//using namespace std;
//string word, sentence;
//int ans, flag, location;
//int main()
//{
//	cin >> word;
//	getchar();
//	getline(cin, sentence);
//	for (int i = 0; i < word.length(); i++)
//		word[i] = tolower(word[i]);
//	for (int i = 0; i < sentence.length(); i++)
//		sentence[i] = tolower(sentence[i]);
//	for (int i = 0; i < sentence.length(); i++)
//	{
//		int j, sum = 0;
//		if (sentence[i] == ' ')continue;
//		for (j = 0; j < word.length(); j++)
//		{
//			if (word[j] != sentence[i + j])break;
//			if (i > 0 && sentence[i - 1] != ' ') break;
//		}
//		if (j == word.length() && (sentence[j + i] == ' ' || j + i == sentence.length())) //单词长度匹配，后面是空格或者句末 
//		{
//			ans++;
//			if (ans == 1) location = i;
//		}
//	}
//	ans == 0 ? printf("-1") : printf("%d %d", ans, location);
//	return 0;
//}