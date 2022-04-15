#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;
int main(){

// find the greatest no.
int num1,num2,num3;
cout<<"enter the value of num1, num2 and num3"<<endl;
cin>>num1>>num2>>num3;
 if (num1>num2){
  if(num1>num3)
  cout<<"greatest number is "<<num1;
 }

 if(num2>num3){
 if(num2>num1)
 cout<<"greatest number is "<<num2<<endl;
 }

else{

cout<<"greatest number is"<<endl<<num3;
}
 

return 0;
}



    