#include<iostream>
#include<cmath>
#define MAXN 1000005
using namespace std;
int m, n, ans, prime[MAXN], visit[MAXN];
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
  cin >> m >> n;
  for (int i = m;i<=n;i++){
    int temp_i = i;
    while (!visit[temp_i] && temp_i >= 10){
      temp_i /= 10;
    }
    if(temp_i < 10 && !visit[temp_i]){
      cout << i << endl;
    }
  }
  return 0;
}