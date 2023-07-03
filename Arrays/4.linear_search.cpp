#include <iostream>

using namespace std;

int main(){
    int arr[20];
    int n,key, index = -1;
    cout << "Enter the length of your Array : " ;
    cin>> n;
    cout<< "Ok start entering your valus one by one : " << endl;
    for(int i = 0; i < n; i++){
        cout << "Enter the value of your your " << i << "th index : ";
        cin>> arr[i];
    }

    cout << "Enter the element you want to serch in this Array : " ;
    cin>>key;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] ==  key){
            index = i;
            break;
        }
    }

    if(index == -1){
        cout <<"The element is not present in the array : " << index <<endl;

    }else{
         cout <<"The element is present in the array at the index : " << index <<endl;
    }
    
}
