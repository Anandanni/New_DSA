#include<iostream>
using namespace std;

//function defnition 
// int print(){
//     cout<<"Hello function \n";
//     return 0;
// }
// int sum(int a,int b){
//      int s=a+b;
//      return s;
// }
// int min(int a,int b){
//     if(a>b){
//         cout<<"B is min value"<< endl;

//     }else{
//         return a;
//     }
// }

int fact(int n){
    int fact=1;
    for (int i = 1; i <=n; i++)
    {
        fact*=i;
    }
    return fact;
    
}
// int sumofDigt(int n){
//     int sum=0,rem;
//     while (n>0)
//     {
//         rem=n%10;
//         sum+=rem;
//         n=n/10;
//     }
//     return sum;
    
// }
int nCr(int n,int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);

    return fact_n  / (fact_r*fact_nmr);
}



int main()
{
    // cout<< sum(10,45) << endl;
    // cout<< min(4,5)<< endl;
    // //cout<< "Fact ="<<fact(5)<< endl;
    // cout<<"Sum of Digit= "<< sumofDigt(4564)<<endl;

    int n=6,r=3;
    cout<<"nCr is ="<< nCr(n,r)<<endl;
    
    return 0;
}
