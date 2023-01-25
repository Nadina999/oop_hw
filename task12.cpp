#include <iostream>
#include <list>
#include <functional>

std::list<int> partition(std::list<int>::const_iterator i1,std::list<int>::const_iterator i2,std::function<bool(int)> f){

  std::list<int> result;

try{

for(auto it=i1;it!=i2;++it){
  
if(f(*it)){


    result.push_front(*it);
  }

  else{


    result.push_back(*it);
  }
}
}

catch(...){

  result.assign(i1,i2);



}

return result;

}



int main(){


  std::list<int> nums{15,20,25,-10,-75,100,-255,430,200};

  auto result=partition(cbegin(nums),cend(nums),[](int num){if(num>400) throw 5; return num>0;});



 for(const auto& e : result){

   std::cout<<e<<" ";

  }

 std::cout<<std::endl;

 std::cout<<std::endl;

}

