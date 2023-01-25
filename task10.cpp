#include <iostream>
#include <list>

std::list<int> even_odd(std::list<int>::const_iterator i1,std::list<int>::const_iterator i2){

  std::list<int> result;

while(i1!=i2){

  if((*i1)%2==0){

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


  std::list<int> list{1,2,3,4,5};

  std::list<int> result=even_odd(begin(list),end(list));

 for(const auto& e : result){

   std::cout<<e<<" ";

  }

 std::cout<<std::endl;




 }









