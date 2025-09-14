#include<iostream>
#define MAXN 100000005
using namespace std;
int n, q, k, prime[MAXN], visit[MAXN];
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
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  oula_prime();
  cin >> n >> q;
  for (int i = 1;i<=q;i++){
    cin >> k;
    cout << prime[k] <<'\n';
  }
  return 0;
}