#include <iostream>
using namespace std;


// Question
/*For a certain period of time, patients arrive at the hospital every day for an examination. It
initially has 7 doctors. Each doctor can treat only one patient per day, but sometimes there is a
shortage of doctors, so the remaining patients are sent to other hospitals. Every third day the
hospital makes calculations and if the count of untreated patients is greater than the count of
treated ones, another doctor is appointed. Appointment takes place before the daily patient
acceptance begins.
Write a program that calculates for a given period of time, the count of treated and untreated
patients.
Input Data
Input is read from the console and contains:
● On the first line – the period, for which you need to make calculations. Integer in the
range of [1 … 1000].
● On the next lines (equal to the count of days) – count of the patients, who arrive for
treatment for the current day. Integer in the range of [0 … 10 000].
Output Data
Print on the console 2 lines:
● On the first line: “Treated patients: {count of treated patients}.”
● On the second line: “Untreated patients: {count of untreated patients}.”
*/
main(){
int day, patient ;
cout<<"Enter the day:";
cin>>day;
for(int x=1; x<=day; x++){
    cout<<"Enter the patients:";
    cin>>patient;
int doctor=7;
int treated1;
int untreated1;
int treated2;
int treated3;
int untreated3;
int untreated2;
if(x==1){
    if(patient>doctor){
        treated1=patient;
    }
else{
     untreated1=patient-doctor;
}
}
if(x==2){
    if(patient>doctor){
        treated2=patient;
    }
else{
     untreated2=patient-doctor;
}
}
if(x==3){
if(treated1+treated2   <   untreated1+untreated2){
     int newdoctor=doctor+1;
    if(patient>newdoctor){
     treated3=patient;
    }
      untreated3=patient-newdoctor;
else{




}
}

}




}
}
