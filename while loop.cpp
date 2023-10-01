#include <iostream>
using namespace std;
int main(){
    int n;
    int i=1;
    int sum=0;
    cout<<"Enter the number ";
    cin>>n;
    while(i<=n) {
        sum=sum+i;
        i=i+1;
    }
cout<<"The sum of first "<<n<<" natural numbers = "<<sum;
}
