#include<iostream>
#include<algorithm>
using namespace std;
int n, s, a, b, ans;
struct apple
{
  int x, y;
};
apple ap[5005];

int compare(apple a,apple b){
  return a.y < b.y;
}
int main(){
  cin >> n >> s >> a >> b;
  for (int i = 1;i<=n;i++){
    cin >> ap[i].x >> ap[i].y;
  }
  sort(ap + 1, ap + 1 + n, compare);
  for (int i = 1;i<=n;i++){
    if(s<ap[i].y){
      break;
    }
    if(a+b>=ap[i].x){
      ans++;
      s -= ap[i].y;
    }
  }
  cout << ans;
  return 0;
}

// #include<iostream>
// #include<algorithm>
// using namespace std;
// struct pick_apple{
//   int x, y;
// } pick_apple_list[5005];
// int cmp(pick_apple a, pick_apple b){
//   return a.y < b.y;
// }
// int main(){
//   int n, s, num=0;
//   cin >> n >> s;
//   int a, b;
//   cin >> a >> b;
//   for (int i = 1;i<=n;i++){
//     cin>>pick_apple_list[i].x>>pick_apple_list[i].y;
//   }
//   sort(pick_apple_list+1, pick_apple_list+n+1, cmp);
//   for (int i = 1;i<=n;i++){
//     if(a+b>=pick_apple_list[i].x && s>=pick_apple_list[i].y){
//       num++;
//       s-=pick_apple_list[i].y;
//     }
//   }
//   cout << num;
//   return 0;
// }