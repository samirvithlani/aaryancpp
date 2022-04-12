#include<iostream>
using namespace std;

int main(){

    int a[3][3],sum=0,ans=0;

    cout<<"\n enter 3*3 values: ";
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            cin>>a[i][j];
        }
    }
    
    cout<<"\n Elements are ::"<<endl;
    for(int i=0;i<3;i++){
        ans=0;

        for(int j=0;j<3;j++){

            cout<<a[i][j]<<" ";
            sum = sum +a[i][j];
            ans = ans + a[i][j];
        }
        cout<<"ans ="<<ans;
        cout<<"\n";
    }
    cout<<"\n sum of all elements is: "<<sum;

}
