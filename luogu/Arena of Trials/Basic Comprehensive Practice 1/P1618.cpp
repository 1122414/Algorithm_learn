#include<iostream>
#include<set>
using namespace std;
set<int> s;
int a,b,c;
void part(int x){
  while(x){
    if (x%10!=0){
      s.insert(x%10);
    }
    x /= 10;
  }
}
int main(){
  int flag = 0;
  cin >> a >> b >> c;
  for (int i = 1;i<=333;i++){
    s.clear();
    int tempA = a * i, tempB = b * i, tempC = c * i;
    if(tempC>=1000)
      break;
    part(tempA), part(tempB), part(tempC);
    if(s.size()==9){
      flag = 1;
      cout << tempA << ' ' << tempB << ' ' << tempC << endl;
    }else{
      continue;
    }
  }
  if(flag == 0){
    cout << "No!!!";
  }
  return 0;
}

// #include<iostream>
// #include<set>
// using namespace std;
// set<int> s;
// void excrete(int a){
//   while (a!=0){
//     if(a%10!=0){
//       s.insert(a%10);
//     }
//     a/=10;
//   }
  
// }
// int main(){
//   int a, b, c, flag=0;
//   // 乘 然后 拆开 判断
//   cin >> a >> b >> c;
//   for (int i = 1;i<=333;i++){
//     s.clear();
//     int tempA = a * i;
//     int tempB = b * i;
//     int tempC = c * i;
//     if(tempA>1000||tempB>1000||tempC>1000){
//       break;
//     }
//     excrete(tempA);
//     excrete(tempB);
//     excrete(tempC);
//     if(s.size() == 9){
//       flag = 1;
//       cout<<tempA<<' '<<tempB<<' '<<tempC<<endl;
//     }else{
//       continue;
//     }
//   }
//   if(flag==0){
//     cout<<"No!!!"<<endl;
//   }
//     return 0;
// }