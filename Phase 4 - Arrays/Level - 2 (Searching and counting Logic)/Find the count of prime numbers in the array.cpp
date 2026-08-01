#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" integers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        bool isPrime = true;
        if(arr[i] <= 1){
            isPrime = false;
        }
        else{
            for(int j=2; j<=arr[i]/2; j++){
                if(arr[i] % j == 0){
                    isPrime = false;
                    break;
                }
            }
        }
        if(isPrime){
            count++;
        }
    }
    cout<<"The count of prime numbers in the array is: "<<count<<endl;
    return 0;
}