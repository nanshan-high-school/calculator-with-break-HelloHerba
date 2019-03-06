#include <iostream>
using namespace std;
int main() {
  int i,total=0;
  long int num1,num2;
  string math;
  cout<<"請輸入要計算的數字:";
  cin>>num1;
  for(i=0;i>=0;i++)
  {
      cout<<"請輸入運算符號(+-*/%)和數字(輸入+0結束計算):";
      cin>>math[i]>>num2;
      if(math[i]=='+')
      { 
        if(num2==0)
        {break;}
        num1=num1+num2;
        cout<<"目前總數為："<<num1<<"\n\n";
        }
      if(math[i]=='-')
      {
        num1=num1-num2;
        cout<<"目前總數為："<<num1<<"\n\n";
        }
      if(math[i]=='/')
      {
        if(num2==0)
        {
            cout<<"除以0幹嘛\n";
            continue;
        }
        num1=num1/num2;
        cout<<"目前總數為："<<num1<<"\n\n";
      }
      if(math[i]=='%')
      {
        if(num2==0)
        {
            cout<<"找除以0的餘數幹嘛\n";
            continue;
        }
        num1=num1%num2;
        cout<<"目前總數為："<<num1<<"\n\n";    
      }
      if(math[i]=='*')
      {
        num1=num1*num2;
        cout<<"目前總數為："<<num1<<"\n\n";
        }
  }
  cout<<"\n數字總合為："<<num1;
}
