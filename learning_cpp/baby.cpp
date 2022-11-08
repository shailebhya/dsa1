
#include <iostream>
using namespace std;
int main(){
//User Input and Output	
cout<< "hi this is the output stream";
int age;
cin>>age;
cout << &age<<endl;
int *b  = &age;
int button=2;
cout<<b;
//switch case walal
switch (button)
{
case 1:
cout<<"hello";
    break;
case 2:
cout<<"hello2";
break;
default:
    break;
}
return 0;
}
