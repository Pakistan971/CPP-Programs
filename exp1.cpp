//1.	Write a program that find the largest number in an array.
#include<iostream>
using namespace std;
void largest_in_array(int arr[],int len){
    int max=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<" is the largest among all the Integers in The Array.";
}
int main()
{
    int arr[10]={1,2,3,47,5,6,7,8,9,10};
    int length_of_array = sizeof(arr)/sizeof(arr[0]);
    largest_in_array(arr,length_of_array);
    return 0;
}