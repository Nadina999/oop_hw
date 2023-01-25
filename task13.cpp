#include <iostream>
#include <vector>
#include <functional>

typedef std::vector<std::function<bool(int)>> Functions;

void default_if_not_all(std::vector<int>& i, Functions f,int def=-1){

  for(auto& num : i){
     for(auto& fun : f){
       if(!(fun(num))){
        num=def;
     }
    }  
  }
 }


int main(){

  std::vector<int> v{1,2,3,4,5};

  Functions f{
    [](int a){return a>0; } , 
      
    [](int a){return a%2==0;}
  
  };

  default_if_not_all(v,f);

  for(const auto& e : v){
 
    std::cout<<e<<" ";

  }

  std::cout<<std::endl;


}
