#include<iostream>
#define MAXN 2000005
#define ll long long int
using namespace std;
ll t, n, prime[MAXN], visit[MAXN];
void oula_prime(){
  for (int i = 2;i<=MAXN;i++){
    if(!visit[i]){
      prime[++prime[0]] = i;
    }
    for (int j = 1;j<=prime[0] && i*prime[j]<=MAXN;j++){
      visit[i * prime[j]] = 1;
      if (i % prime[j] == 0){
        break;
      }
    }
  }
}
int main(){
  oula_prime();
  cin >> t;
  while (t--){
    cin >> n;
    ll temp_n = n;
    for (ll i = 1;i<=prime[0] && prime[i]*prime[i]<=n;i++){
      while(temp_n%prime[i] == 0){
        cout << prime[i] <<' ';
        temp_n /= prime[i];
      }
    }
    if(temp_n > 1)
      cout << temp_n;
    cout << '\n';
  }
  
  return 0;
}