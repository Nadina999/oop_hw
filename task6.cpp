#include <iostream>

using namespace std;


int main(){

int num1,num2;

char oper;

cin>>num1>>oper>>num2;

if(cin>>num1 && cin>>num2){

switch(oper){

  case '+':
  cout<<num1+num2<<endl;
  break;

  case '-':
  cout<<num1-num2<<endl;
  break;

  case '*':
  cout<<num1*num2<<endl;
  break;

  case '/':
  if(num2==0){
    cout<<"Division by zero is an undefined operation"<<endl;
    break;
  }

  cout<<((double)num1/num2)<<endl;
  break;

  case '%':
  cout<<num1%num2<<endl;
  break;

  case '^':
  int result=1;
  for(int i=0;i<num2;++i){
    result*=num1;
  }
  cout<<result<<endl;
  break;
}

}

else{
  
  cout<<"Invalid! "<<endl;
}

return 0;
}

