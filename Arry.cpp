#include<iostream>
using namespace std;
int main()
{
    int size;
    int small=0;
    int max=0;
    cout<<"Enter your arr Size :"<<endl;
    cin>>size;
    cout<<"Enter your arr Element"<<endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    for (int i=0;i<size;i++)
    {
        if (arr[i]< small)
        {
            small=arr[i];
        }
        // if (arr[i]>max)
        // {
        //     max=arr[i];
        //     /* code */
        // }
        
        
        
    }
    cout<<"Small Element :"<<small<<endl;
    cout<<" Max Element :"<<max<<endl;
    
    return 0;
}
