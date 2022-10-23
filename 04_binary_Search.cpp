#include <iostream>
using namespace std;


int binary_search(int arr[], int n, int key)
{
    //Implement Binary search

    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        int mid =(s+e)/2;

        if (arr[mid] == key){
            return mid;

        }

        else if (arr[mid] > key){
            return e = mid - 1;
        }

        else (arr[mid] < key){
            return s = mid + 1;

        }

        return -1;

    }
     

}

int main()

{
    int arr[] = {2,4,6,7,8,9,10,11,23,45,67,100};
    int n = sizeof(arr)/sizeof(int);

    cout<<"ENTER THE VALUE YOU WANT TO SEARCH IN THE GIVEN ARRAY - [2,4,6,7,8,9,10,11,23,45,67,100] : ";

    int key;
    cin>>key;

    int index = binary_search(arr,n,key);

    if (index!= -1){
        cout<<key<<" is present at index " << index <<endl;
        cout<< "BINARY SEARCH IS DONE SUCCESSFULLY" <<endl;

    }

    else
    {
        cout<< key<<" is not found!" << endl;
    }

    return 0;

}