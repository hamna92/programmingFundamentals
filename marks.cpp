#include <iostream>
using namespace std;
main() {

string name;
float subjectmarks1;
float subjectmarks2;
float subjectmarks3;
float subjectmarks4;
float subjectmarks5;
float totalmarks;
float percentage;
float obtainedmarks;

cout<<"enter name";
cin>> name;
cout<<"enter subjectmarks1";
cin>>subjectmarks1;
cout<<"enter subjectmarks2";
cin>> subjectmarks2;
cout<<"enter subjectmarks3";
cin>>subjectmarks3;
cout<< "enter subjectmarks4";
cin>> subjectmarks4;
cout<< "enter subjectmarks5";
cin>> subjectmarks5;
totalmarks=500.0;
obtainedmarks= subjectmarks1+subjectmarks2+subjectmarks3+ subjectmarks4+subjectmarks5;
percentage= (obtainedmarks/500)*100;
cout<<"the percentage is:";
cin>>percentage; 
}






