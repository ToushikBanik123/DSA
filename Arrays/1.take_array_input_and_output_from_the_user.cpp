// Take array input from the user

#include <iostream>

using namespace std;

int main()
{
    int arr[10]; //Creating an Fixt size array 
    int n; // For the lenth of unser input 
    cout<<"Enter how many input you want to give in the Array: ";
    cin >> n;
    cout<<"Ok start entering your values : " << endl;
    for(int i = 0; i< n; i++){
        cout<<"Enter your " << (i+1) << "th Value : ";
        cin>>arr[i];
        cout<<endl;
    }
    
    cout<<"So this is your final array: ";
    for(int i = 0; i< n; i++){
        cout<< arr[i];
    }
    cout<<endl;
    cout<<".......Thank Your......."<<endl;
    
    return 0;
}