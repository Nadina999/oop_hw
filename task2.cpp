#include <bitset>
#include <iostream>



void printBits(unsigned short reg) {
  std::bitset<16> bits(reg);
  std::cout <<"Value in bits: " <<bits << std::endl;
}


int main() {
  
  unsigned short reg1=0,reg2=0,pos;
  unsigned short *used_register=nullptr;
  unsigned short reg;

  
  while(true) {

  std::cout << "1. Print register" << std::endl;
  std::cout << "2. Set bit in register" << std::endl;
  std::cout << "3. Reset bit in register" << std::endl;
  std::cout << "4. Swap registers"<<std::endl;
  std::cout << "5. Exit" << std::endl;
  std::cout << "Enter option: ";
  unsigned short option;
  std::cin >> option;
   if (option == 5) {
      break;
   }

    std::cout << "Select the register: " << std::endl<<"1. First register" << std::endl<<"2. Second register"<<std::endl;
    std::cin>>reg;

    used_register=(reg==1 ? &reg1 : &reg2);

    if (option == 1) {
    
    std::cout<<"Register value is: "<<*used_register<<std::endl;
    printBits(*used_register); 
  } 
    else if (option == 2) {
      std::cout<<"Enter bit number: "<<std::endl;
      std::cin>>pos;
      *used_register|=(1<<pos);   
      std::cout<<"New value: "<<*used_register<<std::endl;
  } 

    else if (option == 3) {
      std::cout<<"Enter bit number: "<<std::endl;
      std::cin>>pos;
      *used_register &= ~( 1<<pos);   
      std::cout<<"New value: "<<*used_register<<std::endl;
}
    
 else if (option ==4) {

unsigned short temp=reg1;
reg1=reg2;
reg2=temp;

std::cout<<"Registers are swapped! "<<std::endl;
 
 
 }

    std::cout << std::endl;
  }

  return 0;
}
