#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> words{};

string word;

int main(){
int longest=0;
string text;

 cout<<"Enter the word "<<endl;

while(cin>>word){

  cout<<"Enter the word "<<endl;


  words.push_back(word);


 for(auto& e :words){
    int size=e.size();
    if(size>longest){
     longest=size;

    }
  }



  }

sort(begin(words),end(words));


cout<<longest<<endl;
  

const string line(longest,'+');
const string empty(longest,' ');
const auto first_last = "++" + line + "++"; 
const auto second_fourth = "+ " + empty + " +";
cout<<first_last<<endl;
cout << second_fourth << endl; 

for(auto& e:words){
    const int size=e.size();
    int space=longest-size;
    string text(space,' ' );

    cout<<"+ "<<e<<text<<" +"<<endl;

    }
  cout << second_fourth << endl;
  cout << first_last << endl;

return 0;
}





