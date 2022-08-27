#include <iostream>
using namespace std;

// this program is related to the how to understand 
//the basic of function and Array. 

int roll_no[]={1,2,3,4,5};
float cgpa[]={2.74,2.66,3.44,1.66,1.55};
void find_cgpa(int a){
     for(int i=0; i<5; i++){

         if(roll_no[i]==a){
          cout<<"Roll number="<<roll_no[i]<<"\t";
          cout<<"cgpa="<<cgpa[i]<<endl;

         }
     }

}

int main(){
int n;
cout<<"Enter your roll number: ";
cin>>n;
  find_cgpa(n);
return 0;
}