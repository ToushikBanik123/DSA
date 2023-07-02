/*
Given an array of length N,
 you need to find and print the sum of all elements of the array.
*/

#include <iostream>
using namespace  std;

int main(){
    int arr[20]; //Creating an Fixt size array 
    int n; // For the lenth of unser input 
    long sum = 0;//variable for the sum of all the elements 
    cout<<"Enter how many input you want to give in the Array: ";
    cin >> n;
    cout<<"Ok start entering your values : " << endl;
    for(int i = 0; i< n; i++){
        cout<<"Enter your " << (i+1) << "th Value : ";
        cin>>arr[i];
        cout<<endl;
    }

    //Travarcing the array and adding all the elements in the array 
    for(int i = 0; i < n; i++){
        sum += arr[i];
        cout << sum << endl;
    
    }
    
    cout <<"So the sum of all the elements are : " <<  sum << endl;


    return 0;
}