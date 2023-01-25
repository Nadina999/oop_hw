#include <iostream>
#include <vector>

using namespace std;


int main(){

int num,sum=0,prod=1;

vector<int> numbers;

cout<<"Insert an integer: "<<endl;

cin>>num;

 while(num>0){

  numbers.push_back(num%10);
  num/=10;
}

int min_elem=numbers[0];
int max_elem=numbers[0];

for(int i=0;i<numbers.size();++i){
  cout<<numbers[i];

}

cout<<endl;

for(int i=1;i<numbers.size();++i){

  if(numbers[i]<min_elem){

      min_elem=numbers[i];
  }

}

cout<<min_elem<<endl;




for(int i=0;i<numbers.size();++i){

  if(numbers[i]>max_elem){

    max_elem=numbers[i];
  }
}

cout<<max_elem<<endl;

for(int i=0;i<numbers.size();++i){

sum+=numbers[i];


}

cout<<sum<<endl;


for(int i=0;i<numbers.size();++i){

prod*=numbers[i];


}

cout<<prod<<endl;

return 0;




}

