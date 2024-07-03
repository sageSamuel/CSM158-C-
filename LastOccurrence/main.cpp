#include <iostream>
using namespace std;
int main()
{
    int n,num,LastIndex=-1;
    cout<< "Enter the size of the set :" <<endl;
    cin>> n;

    int arr[n];

    for(int i=0;i<n;i++){
       cout<<"Enter the "<<(i+1)<<(i==0?"st":(i==1?"nd":(i==2?"rd":"th")))<< " number: "<<endl;
        cin>>arr[i];
    }
    cout<<" Enter the number to find the position of last occurrence: "<<endl;
    cin>> num;

    for(int i=0;i<n;i++){
        if(arr[i]==num){
            LastIndex=i;
        }
    }
    if(LastIndex==-1){
        cout<<num<<" does not appear in the set ";
    }
    else{
        cout<<num<<" appears at the "<< (LastIndex+1) << (LastIndex==0?"st":(LastIndex==1?"nd":(LastIndex==2?"rd":"th")))<<" position";
    }
    return 0;
}
