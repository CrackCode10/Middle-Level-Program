#include <iostream>
using namespace std;


// Question 
/*In this challenge, you must generate a sequence of consecutive numbers, from a lower bound
that will always be equal to 1, up to a variable given higher bound (including the bounds in the
sequence).
Each number of the sequence that can be exactly divided by 4 must be amplified by 10 (see
notes below).
Given a higher bound num, implement a function that displays the sequence of numbers with
every multiple of 4 has been amplified on the console*/
main(){
    int num,a,y,z;
    cout<<"Enter the value:";
    cin>>num;
for(int x=1;  x<=num;  x++){
if(x%4==0){
    y=x*10;
cout <<y<<endl;
continue;
}
cout<<x<<endl;
}
}