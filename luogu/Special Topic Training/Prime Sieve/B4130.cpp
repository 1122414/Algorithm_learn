#include<iostream>
#define MAXN 5000005
using namespace std;
int n, ans, temp_ans, prime[MAXN], visit[MAXN];
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
  cin >> n;
  for (int i = 4; i<=n ;i++){
    if(visit[i]){
      temp_ans++;
    }else{
      temp_ans = 0;
    }
    ans = max(ans, temp_ans);
  }
  cout << ans;
  return 0;
}