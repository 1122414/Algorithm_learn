#include<iostream>
#include<cmath>
#define MAXN 2000000
#define ll long long int
using namespace std;
int n, prime[MAXN], visit[MAXN];
ll fb[50];
void oula_prime(){
  for (int i = 2;i<=MAXN;i++){
    if(!visit[i]) {
      prime[++prime[0]] = i;
    }
    for (int j = 1;j<=prime[0]&&i*prime[j]<=MAXN;j++){
      visit[i * prime[j]] = 1;
      if(i%prime[j]==0){
        break;
      } 
    }
  }
}
int main(){
  oula_prime();
  cin >> n;
  ll temp = pow(2, 31);
  fb[1] = 1, fb[2] = 1;
  for (int i = 3; i <= 49; i++){
    fb[i] = ((fb[i - 1] % temp) + (fb[i - 2] % temp)) % temp;
  }
  cout << fb[n] << '=';
  ll temp_fbn = fb[n];
  while(temp_fbn){
    for (int i = 1;i<=prime[0];i++){
      if(temp_fbn % prime[i] == 0){
        temp_fbn /= prime[i];
        if(temp_fbn == 1){
          cout << prime[i];
          return 0;
        }
        cout << prime[i] << '*';
        break;
      }
    }
  }
  return 0;
}