#include<iostream>
using namespace std;

int D_to_B(int decnum){
    int ans=0;
    int pow=1;//Here is power makle 10^0,10^1......)
    while (decnum>0)
    {
        int rem=decnum%2;//findthe remanider 
        decnum=decnum/2;//update Dcimal number
        ans+=(rem*pow);//Binary number
        pow*=10;//Poewr update 
        
    }
    return ans;//return binary number
    

}

//Binary to dicmal convert
int B_to_D(int binNum){
    int ans=0,pow=1;
    while (binNum>0)
    {
        int rem=binNum%10;//find the reminder
        ans+=rem*pow;//Store the ansewer 
        binNum=binNum/10;//Update the Binary number
        pow*=2;//Update the power
    }
    return ans ;
    
}


int main()
{
    // int num;
    // cout<<"Enter your You number:";
    // cin>>num;
    // cout<<"The Number is convert :"<<D_to_B(num)<<endl;
    //print the binary number 1 to 10
    // for (int i = 1; i < 10; i++)
    // {
    //    cout<<"Binary Number The Number is:"<<i<<endl<< D_to_B(i)<<endl;
    // }
    int num;
    cout<<"Enter your You number:";
    cin>>num;
    cout<<"The Number is convert :"<<B_to_D(num)<<endl;
    
    return 0;
}
