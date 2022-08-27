#include <iostream>
using namespace std;


// this program is related to the parllel array .
// As two array roll no and age which is show on the respective
// number or store value in array. 
int roll_no[]={1,2,3,4,5};
    int age[]={25,30,35,40,45};
void parllel_value(){
 
 for(int i=0; i<5; i++){
     cout<<"roll number["<<i<<"]"<< roll_no[i]<<"\t";
     cout<<"age["<<i<<"]"<< age[i]<<endl;
     
 }

}
int main(){

    parllel_value();
    return 0;


}