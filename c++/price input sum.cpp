#include<iostream>
using namespace std;
int sum(int arr[], int size)
{
    int price = 0;
    for(int i = 0; i < size; i++)
    {
        price=price + arr[i];
    }
    cout << price <<endl;

}
int main()
{
    int arr[5];
    for(int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    sum(arr,5);
    return 0;
}