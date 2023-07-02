/*
Find out the min and max elements in an array and also the index of that min and max element.
Like what is the index of that min element or that max element and print it out. 
*/

#include <iostream>
#include <climits>
using namespace std;

int main(){
    //declearing the array 
    int arr[20];

    //creating one variable for min value one for max value one for min index one for max index
    //Initialiging the min_val with the max value posible to store in the int 
    //Initialiging the max_val with the min value posible to store in the int 

    long min_val = INTMAX_MAX, max_val = INT_MIN;
    int min_index,max_index,n;

    cout<<"Enter the length of your Array : ";
    cin >> n;
    cout << "Ok Start Entering the valus in your array : " << endl;

    //Taking input from the user in the array 
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your " << i << "th Value : ";
        cin >> arr[i];
        cout << endl;
    }

    //Printing the array for confermation 
    cout << "So this is your Array : " ;
    for(int i = 0; i < n; i++){
        cout<< arr[i];
    }
    cout << endl;

    //Travarcing th array and finding the valus 

    for(int i = 0; i < n ; i++){
        if(arr[i] < min_val){
            min_val = arr[i];
            min_index = i;
        }

        if(arr[i]>max_val){
            max_val =  arr[i];
            max_index = i;
        }
    }

    cout<< "So the min value is : " << min_val << " and it is present in the index : " << min_index << ". " <<endl;
    cout<< "So the max value is : " << max_val << " and it is present in the index : " << max_index << ". " <<endl;

    return 0;
}
