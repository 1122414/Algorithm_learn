#include<iostream>
#define MAXN 20000
using namespace std;
int n, prime[MAXN], visit[MAXN];
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
  cin >> n;
  visit[0] = 1;
  visit[1] = 1;

  oula_prime();
  for (int i = 1;i<=2500;i++){
    for (int j = 1;j<=2500;j++){
      if(prime[j]>=n)
        break;
      if(!visit[n- prime[i] - prime[j]]){
        cout << prime[i] << ' ' << prime[j] << ' ' << n - prime[i] - prime[j];
        return 0;
      }
    }
  }
  return 0;
}