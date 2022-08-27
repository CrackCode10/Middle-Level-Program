#include <iostream>
using namespace std;



// this is the program is related to the roll number that 
// contain the higest marks
const int size=5;
int roll_no[]={1,2,3,4,5};
int marks[]={20,45,36,14,48};
int check_highest(){
    int index,max=0;
for(int i=0; i<size; i++){
    if(marks[i]>max){
       max=marks[i];
       index=i;

    }
}
    return index;
}
int main(){
int idx;
idx=check_highest();
cout<<"The highest roll number marks is: "<<roll_no[idx]<<endl;


return 0;

}