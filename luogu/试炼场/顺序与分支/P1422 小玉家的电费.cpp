#include<iostream>
#include <iomanip>
#define ll long long int
using namespace std;
int main(){
  ll a;
  cin >> a;
  if (a <= 150) cout << std::fixed << std::setprecision(1) << a * 0.4463;
  else if (a <= 400)
    cout << std::fixed << std::setprecision(1) << 150 * 0.4463 + (a - 150) * 0.4663;
  else cout << std::fixed << std::setprecision(1) << 150 * 0.4463 + 250*0.4663 + (a-400) * 0.5663;
  return 0;
}