//part1
#include<iostream>
using namespace std;

int main()
{
 int queue[5];
 int front =0;
 int rear =0;

 //add orders
 cout<< "Enter 5 customer order number:\n";

 for (int i=0; i<5; i++)
 {
  cin >> queue[rear];
  rear++;
 }

 //process orders
 cout << "\nProcessing Orders:\n";

 while(front<rear)
 {
  cout << " Processing Order :"<< queue[front] << endl;
  front++;
 }

 return 0;
}
