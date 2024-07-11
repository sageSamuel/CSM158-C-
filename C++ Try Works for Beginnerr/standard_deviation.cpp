#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    double sum=0, mean, sumOfSquares=0, standDev;

    cout<<"Enter the size of the set: "<<endl;
    cin>>n;
    int set[n];
    cout<<"Enter the array elemennts: \n";
    for(int i=0; i<n; i++){
        cin>>set[i];
    }
    // Finding the mean
    for (int i=0; i<n; i++){
        sum=sum+set[i];
    }
    mean=sum/n;
    //Sum of the squares
    for(int i=0; i<n; i++){
        sumOfSquares=sumOfSquares+(set[i]-mean)*(set[i]-mean);
    }
    standDev=sqrt(sumOfSquares/n);

    cout<<"the standard deviation of the set of size "<<n<<" is "<<standDev;

    return 0;
}