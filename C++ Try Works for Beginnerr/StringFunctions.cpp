#include <iostream>
using namespace std;

void myfunction(string country="Ghana" ){
cout<< country << " is my country"<<"\n" ;
}

int main()
{
myfunction("Norway");
myfunction("Russia");
myfunction("Belarus");
myfunction("Ukraine");
myfunction();

return 0;
}