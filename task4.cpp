#include <iostream>
#include<algorithm>

int main(){

  while(true){
  std::string word1,word2;
  std::cout<<"Insert first word: "<<std::endl;
  std::cin>>word1;
  std::cout<<"Insert second word: "<<std::endl;
  std::cin>>word2;
  int hamm_distance=0;
  
  for(int i=0;i<word1.size();++i){
  if(word1[i]>='A' && word1[i]<='Z'){
    word1[i]+='a'-'A';
  }
  if(word2[i]>='A' && word2[i]<='Z'){
    word2[i]+='a'-'A';

  }
  }

  if(word1.length()==word2.length()){
   
  for(int i=0;i<word1.size();++i){
    
   if(word1[i]!=word2[i])
     hamm_distance++;


  }
  
  std::cout<<"Hamming distance: "<<hamm_distance<<std::endl;
  break;
  }

  else {
    std::cout<<"Strings must have equal length.Try again."<<std::endl;
    break;
  }
  }



return 0;

}

