#include <iostream>
using namespace std;
int main() {
  int i,num,total=0;
  for(i=0;i>=0;i++)
  {
      cout<<"請輸入要加總的數字(輸入0為結束計算)：";
      cin>>num;
      total=total+num;
      if(num==0)
      {
          break;
      }
  }
  cout<<"\n數字總合為："<<total;



}
