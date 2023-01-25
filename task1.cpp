#include <iostream> 
#include <cmath>
namespace temp{
    const double celsiuskelvincoeff=273.15;
  }

namespace speed{
   const double kmmphcoeff=0.621371192;
   const double mphkmcoeff= 1.6093440006147;
}

namespace length{
 const double lykmcoeff=9.461e+12;
 const float ftmcoeff=3.28084;
 const float inchcmcoeff=2.54;

}

namespace weight {
const float kg_to_lb_coeff = 2.20462;
}

namespace fuel {
const float lkm_to_mpg_coeff = 235.215;
}

int main(){


  std::cout<<"Welcome to unit converter.Please enter one of the options: "<<std::endl;
  std::cout<<"1.Temperature"<<std::endl<<"2.Speed"<<std::endl<<"3.Length"<<std::endl<<"4.Weight"<<std::endl<<"5.Fuel economy"<<std::endl;


  short option;

  std::cin>>option;

  std::cout<<"Your choice: "<<option<<std::endl;


  short option2;



 while(option==1){
 

  std::cout<<"1.Celsius to Fahrenheit"<<std::endl<<"2.Fahrenheit to Celsius"<<std::endl<<"3.Celsius to Kelvin"<<std::endl<<"4.Kelvin to Celsius"<<std::endl;

  std::cout<<"Please choose converter: "<<std::endl;

  std::cin>>option2;

  std::cout<<"Your choice: "<<option2<<std::endl;



    if(option2==1){
    float temperature,result;
    std::cout<<"Enter temperature in Celsius "<<std::endl;
    std::cin>>temperature;
    if(temperature<-273.15){
    std::cout<<"Enter valid temperature in Celsius! "<<std::endl;
    std::cin>>temperature;
    }

    result=(temperature*9.0)/5.0+32;
    std::cout<<"The temperature in Fahrenheit :"<<result<<std::endl;
     break;

   }

 if(option2==2){
    float temperature,result;
    std::cout<<"Enter temperature in Fahrenheit  "<<std::endl;
    std::cin>>temperature;
    result=5*(temperature-32)/9;
    std::cout<<"The temperature in Celsius:"<<result<<std::endl;
     break;

   }

 if(option2==3){
    float temperature,result;
    std::cout<<"Enter temperature in Celsius:  "<<std::endl;
    std::cin>>temperature;
    if(temperature<-273.15){
    std::cout<<"Enter valid temperature in Celsius! "<<std::endl;
    std::cin>>result;}

    result=temperature+temp::celsiuskelvincoeff;
    std::cout<<"The temperature in Kelvin :"<<result<<std::endl;
     break;

 }
  
 
 if(option2==4){
    float temperature,result;
    std::cout<<"Enter temperature in Kelvin  "<<std::endl;
    std::cin>>temperature;
    if(temperature<0){
    std::cout<<"Enter valid temperature in Kelvin! "<<std::endl;
    std::cin>>temperature;}

    result=temperature-temp::celsiuskelvincoeff;
    std::cout<<"The temperature in Celsius :"<<result<<std::endl;
     break;

 }





 }
while(option==2){

  std::cout<<"Please choose converter: "<<std::endl;


  std::cout<<"1.Km to mph"<<std::endl<<"2.Mph to km"<<std::endl;


  std::cin>>option2;

  std::cout<<"Your choice: "<<option2<<std::endl;


  if(option2==1){


    std::cout<<"Enter speed in km: "<<std::endl;
    float speed,result;
    std::cin>>speed;
    result=speed*speed::kmmphcoeff;
    std::cout<<"Speed in mph: "<<result<<" mph"<<std::endl;
     break;

  }

if(option2==2){
    std::cout<<"Enter speed in mph: "<<std::endl;
    float speed,result;
    std::cin>>speed;
    result=speed*speed::mphkmcoeff;
    std::cout<<"Speed in km: "<<result<<" km"<<std::endl;
     break;

}

}

while(option==3){

 std::cout<<"Please choose converter: "<<std::endl;


  std::cout<<"1.Lightyear to km"<<std::endl<<"2.Km to lightyear"<<std::endl<<"3.Feet to meters"<<std::endl<<"4.Meters to feet"<<std::endl<<"5.Inch to cm"<<std::endl<<"6.Cm to inch"<<std::endl;

  std::cin>>option2;

  if(option2==1){


    std::cout<<"Enter length in lightyear: "<<std::endl;
    float length,result;
    std::cin>>length;
    result=length*length::lykmcoeff;
    std::cout<<"Length in km is: "<<result<<" km"<<std::endl;
     break;

  }

if(option2==2){
    std::cout<<"Enter length in km "<<std::endl;
    float length,result;
    std::cin>>length;
    result=length/length::lykmcoeff;
    std::cout<<"Length in lightyears: "<<result<<" ly"<<std::endl;
    break;

}

if(option2==3){
    std::cout<<"Enter length in feet "<<std::endl;
    float length,result;
    std::cin>>length;
    result=length/length::ftmcoeff;
    std::cout<<"Length in meters: "<<result<<" m"<<std::endl;
    break;

  }

if(option2==4){
    std::cout<<"Enter length in meters "<<std::endl;
    float length,result;
    std::cin>>length;
    result=length*length::ftmcoeff;
    std::cout<<"Length in feet: "<<result<<" ft"<<std::endl;
    break;
}


if(option2==5){


    std::cout<<"Enter length in inches "<<std::endl;
    float length,result;
    std::cin>>length;
    result=length*length::inchcmcoeff;
    std::cout<<"Lenght in cm: "<<result<<" cm"<<std::endl;
    break;

  }

if(option2==6){
 

    std::cout<<"Enter length in cm "<<std::endl;
    float length,result;
    std::cin>>length;
    result=length/length::inchcmcoeff;
    std::cout<<"Length in inches: "<<result<<" inches"<<std::endl;
    break;
  }
 }

while(option==4){

  std::cout<<"Please choose converter: "<<std::endl;

 

  std::cout<<"1.Kg to lbs"<<std::endl<<"2.Lbs to kg"<<std::endl;
  
  std::cin>>option2;

if(option2==1){

   std::cout<<"Enter weight in kg "<<std::endl;
    float weight,result;
    std::cin>>weight;
    result=weight*weight::kg_to_lb_coeff;
    std::cout<<"Weight in lbs: "<<result<<" lbs"<<std::endl;
    break;

}

if(option2==2){

   std::cout<<"Enter weight in lbs"<<std::endl;
    float weight,result;
    std::cin>>weight;
    result=weight*weight::kg_to_lb_coeff;
    std::cout<<"Weight in kg: "<<result<<" kg"<<std::endl;
    break;
}

}

while(option==5){
  
  
  std::cout<<"Please choose converter: "<<std::endl;

 

  std::cout<<"1.Liters to gallons"<<std::endl<<"2.Gallons to liters"<<std::endl;

  std::cin>>option2;

if(option2==1){

   std::cout<<"Enter fuel expenditure in liters:  "<<std::endl;
    float fuel,result;
    std::cin>>fuel;
    result=fuel*fuel::lkm_to_mpg_coeff;
    std::cout<<"Fuel expenditure in gallons: "<<result<<" gallons"<<std::endl;
    break;

}

if(option2==2){

   std::cout<<"Enter fuel expenditure in gallons: "<<std::endl;
    float fuel,result;
    std::cin>>fuel;
    result=fuel*fuel::lkm_to_mpg_coeff;
    std::cout<<"Fuel expenditure in liters: "<<result<<" liters"<<std::endl;
    break;
  }

 }
return 0;
} 

