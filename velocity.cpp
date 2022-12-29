#include <iostream>
using namespace std;
main() {

int initial_velocity;
int acceleration;
int time;
int final_velocity;

cout<<"enter initial_velocity";
cin>>initial_velocity;
cout<<"enter acceleration";
cin>>acceleration;
cout<<"enter time";
cin>>time;
final_velocity=(time*acceleration)+initial_velocity;
cout<<"the final_velocity is:;" <<final_velocity;
}

