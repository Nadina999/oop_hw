#include <list>
#include <iostream>
#include <functional>

typedef int Intnum;


std::list<int> filter(std::list<Intnum> list,std::function<bool(int)> fun){

  std::list<int> new_list; 

  for(auto& e : list){
    if(fun(e)){
     new_list.push_back(e);
  }
    else{
     
      
     

    }
  }


  return new_list;

}




int main(){

  std::list<int> input{1,9,8,4,11,0,2,6,15,3,10};
  
  auto f=[](int n){return n%2==0;};

  std::list<int> lst=filter(input,f);
  
  for(const auto& e : input){

    std::cout<<e<<" ";

  }

  std::cout<<std::endl;
 
  for(const auto& e : lst){

    std::cout<<e<<" ";

  }



  

}


