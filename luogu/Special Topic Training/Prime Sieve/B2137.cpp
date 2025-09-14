#include<iostream>
#define MAXN 1100005
using namespace std;
int x, y, ans, prime[MAXN], visit[MAXN];
void oula_prime(){
  for (int i = 2; i <= MAXN; i++){
    if(!visit[i]){
      prime[++prime[0]] = i;
    }
    for (int j = 1; j <= prime[0] && i * prime[j] <= MAXN; j++){
      visit[i * prime[j]] = 1;
      if (i % prime[j] == 0){
        break;
      }
    }
  }
}
int main(){
  oula_prime();
  visit[0] = 1, visit[1] = 1;
  cin >> x >> y;
  if(x<=y){
    for (int i = x;i<=y;i++){
        if(visit[i]==0)
          ans ++ ;
      }
  }else{
    for (int i = y;i<=x;i++){
        if(visit[i]==0)
          ans ++ ;
      }
  }
  
  cout << ans;
  return 0;
}