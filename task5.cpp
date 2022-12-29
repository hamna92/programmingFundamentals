#include <iostream>
using namespace std;
main() {

string name;
int obt_matric_marks;
int obt_inter_marks;
int obt_ecat_marks;
float total_matric_marks=1100.0;
float total_inter_marks=550.0;
float total_ecat_marks=400.0;
float per_of_matric;
float per_of_inter;
float per_of_ecat;
float weightage_of_matric;
float weightage_of_inter;
float weightage_of_ecat;
float aggregate;
cout<<"enter name";
cin>>name;
cout<<"enter matric marks";
cin>>obt_matric_marks;
cout<< "enter inter marks";
cin>> obt_inter_marks;
cout<< "enter ecat marks";
cin>> obt_ecat_marks;
per_of_matric= obt_matric_marks/total_matric_marks*100;
per_of_inter= obt_inter_marks/total_inter_marks*100;
per_of_ecat= obt_ecat_marks/total_ecat_marks*100;
weightage_of_matric= per_of_matric*10/100;
weightage_of_inter= per_of_inter*40/100;
weightage_of_ecat = per_of_ecat*50/100;
aggregate= weightage_of_matric+weightage_of_inter+weightage_of_ecat;
cout<<"aggregate is:" << aggregate;
}




