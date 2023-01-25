#include <iostream>
#include <list>
#include <functional>

std::list<int> partition(std::list<int>::const_iterator i1,std::list<int>::const_iterator i2,std::function<bool(int)> f){

  std::list<int> result;

while(i1!=i2){
if(f(*i1)){


    result.push_front(*i1);
  }

  else{


    result.push_back(*i1);
  }
i1++;
}

return result;

}



int main(){


  std::list<int> nums{15,20,25,-10,-75,100,-255,430,200};

  auto result=partition(begin(nums),end(nums),[](int num){return !(num%2);
      });



 for(const auto& e : result){

   std::cout<<e<<" ";

  }

 std::cout<<std::endl;

 std::cout<<std::endl;


  result = partition(nums.cbegin(), nums.cend(),
                    [](int num) { return num > 0; });
  for (int &e : result) {
    std::cout << e << " ";
  }
  std::cout << std::endl << std::endl;

  result = partition(nums.cbegin(), nums.cend(),
                    [](int num) { return !(num % 10); });
  for (int &e : result) {
    std::cout << e << " ";
  }
  std::cout << std::endl << std::endl;

  result = partition(nums.cbegin(), nums.cend(),
                    [](int num) { return std::abs(num) > 99; });
  for (int &e : result) {
    std::cout << e << " ";
  }
  std::cout << std::endl << std::endl;




 }


