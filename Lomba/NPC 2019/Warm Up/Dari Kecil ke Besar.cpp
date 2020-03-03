#include<iostream>
using namespace std;
int main(){
char k,b,x,y;

cin>>k>>b;
y=char(int(b)+32);
x=char(int(k)-32);
cout<<"/ "<<y<<" "<<x<<" \\"<<endl;
return 0;
}
