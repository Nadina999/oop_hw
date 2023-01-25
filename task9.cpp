#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){


string word,text;
int size=0;
string longest={};

vector<string>v;

cout<<"Enter word: "<<endl;

while(cin>>word){
  
  cout<<"Enter word: "<<endl;


  v.push_back(word);

}
cout<<endl;
cout<<"List of words"<<endl;

for(auto e: v){
   cout<<e<<' ';
 for(auto i=0;i<e.size();++i){
   size++;
 }
}
for(auto e: v){
   if(e.size()>longest.size()){

     longest=e;
   }
    }

int len=longest.length();

cout<<endl;

cout<<"Number of characters: "<<size<<endl;
cout<<"Longest word"<<endl;
  

const string line(len,'+');
const string empty(len,' ');
const auto first_last = "++" + line + "++"; 
const auto second_fourth = "+ " + empty + " +";
cout<<first_last<<endl;
cout << second_fourth << endl; 


  cout<<"+ "<<longest<<" +"<<endl;
  cout << second_fourth << endl;
  cout << first_last << endl;
}

 


