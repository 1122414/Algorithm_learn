#include<iostream>
using namespace std;
int n, ans, num[1005];
int main(){
  cin >> n;
  for (int i = 1; i <= n;i++){
    int j = i / 2;
    while(j){
      num[i] += num[j--];
    }
    num[i] += 1;
  }
  cout << num[n];
  return 0;
}