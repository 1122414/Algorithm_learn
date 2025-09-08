#include<iostream>
using namespace std;
int n, k, x[25];
int is_prime(int n){
  for (int i = 2;i*i<=n;i++){
    if(n%i == 0){
      return 0;
    }
  }
  return 1;
}
int main(){
  cin >> n >> k;
  for (int i = 1;i<=n;i++){
    cin >> x[i];
  }
  
  return 0;
}