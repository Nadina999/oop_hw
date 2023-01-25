#include <iostream>
#include <list>
#include <functional>

std::list<int> map(std::list<int> l,std::function<int(int a)> trans){

  std::list<int> new_map{};

  for(auto& e : l){
   int pom=trans(e);
   new_map.push_back(pom);
  }

  return new_map;

}



int main(){

std::list<int> list{7, 2, -4, 5, 0, 6, 3};
auto f= [](int n) { return n * 2 + 1; };
std::list<int> new_map=map(list,f);

for(const auto& e : list){

  std::cout<<e<<" ";
   }

std::cout<<std::endl;

for(const auto& e : new_map){

  std::cout<<e<<" ";
  }


}

