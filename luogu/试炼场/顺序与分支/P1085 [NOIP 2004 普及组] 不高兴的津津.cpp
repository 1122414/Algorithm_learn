#include<iostream>
using namespace std;
int a, b, maxx, ans;
int main(){
  for (int i = 1; i <= 7;i++){
    cin >> a >> b;
    if(a+b>8){
      if(a+b>maxx){
        maxx = a+b;
        ans = i;
      }
    }
  }
  cout << ans;
  return 0;
}