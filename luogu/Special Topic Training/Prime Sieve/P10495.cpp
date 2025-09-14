#include<iostream>
#define MAXN 1000005
using namespace std;
int n, ans[MAXN], prime[MAXN], visit[MAXN];
void oula_prime(){
  for (int i = 2;i<=MAXN;i++){
    if(!visit[i]){
      prime[++prime[0]] = i;
    }
    for (int j = 1;j<=prime[0]&&i*prime[j]<=MAXN;j++){
      visit[i * prime[j]] = 1;
      if(i%prime[j] == 0 ){
        break;
      }
    }
  }
}
int main(){
  oula_prime();
  cin >> n;
  for (int i = 2;i<= n; i++){
    int temp_i = i;
    for (int j = 1; j <= prime[0] && prime[j] * prime[j] <= i; j++){
      while(temp_i % prime[j] == 0){
        ans[prime[j]]++;
        temp_i /= prime[j];
      }
    }
    if (temp_i > 1)
      ans[temp_i]++;
  }
  for (int i = 1; i <= n; i++){
    if(ans[i] != 0){
      cout << i << ' ' << ans[i] << endl;
    }
  }
  return 0;
}