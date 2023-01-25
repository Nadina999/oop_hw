#include <iostream>
#include <functional>
#include <list>
#include <iterator>


int reduce (std::list<int> l,std::function<int(int a,int b)> f,int start){

    for (auto it = l.begin(); it != l.end(); ++it) {
        start = f(*it, start);
    }
    return start;
}


int main(){

  std::list<int> list{11,4,5,12,6,8,9};

  auto a=[](int a,int b){return a+b+1;};

  int start=-12;

  int o=reduce(list,a,start);

  std::cout<<"Output: "<< o<<std::endl;

}

