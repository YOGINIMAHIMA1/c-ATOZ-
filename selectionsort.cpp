#include <iostream>
using namespace std;
void SelectionSort( int arr){
    int min;
    for(int i=0;i<5;i++){
        min=i;
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[min])
            min=j;
        }
        int temp=arr[min];
        arr[min]=arr[j];
        arr[j]=temp;
    }
}
void PrintArray(arr)
{
    cout<<arr[i]<<" ";
}
int main(){
    int arr[]={34,45,67,89,12};
    cout<<"Before Sorting:";
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    int SelectionSort(arr[5]);
    cout<<"After Sorting :";
    void PrintArray(int arr[5]);

}