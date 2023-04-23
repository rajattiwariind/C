#include<iostream>

int main(){
float phy,chem,math,sum;
clrscr();
cout << "enter the mark of physic";
cout << "\n enter the mark of chemistry";
cout << "\n enter the mark of math";
cin>>phy>>chem>>math;
sum=phy+chem+math;

if(sum>=400){
cout<<"you scored first class";
}
else if(sum>=300){
cout<<"you scored second class";
}
else if(sum>=200){
cout<<"you scored third class";
}

}
