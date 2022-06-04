//int to roman conversion using map
#include<iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;

class Solution{

    public:
    string intToRoman(int n){

        
        vector<pair<int,string>> rome {{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},{50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};
        string ans ="";
        int i = rome.size()-1;
        //cout<<"\n i = "<<i;
        //cout<<"\n 12 = "<<rome[12].first;
        //
        while(n!=0){
            //true
            //1000>10
            //true

            //true
            while(rome[i].first>n){

                i--;
                //11
            }
            //"" = "" + "M"
            //cm
            ans = ans + rome[i].second;
            //10 = 10 - 1000
            cout<<"\n ans = "<<ans;
            cout<<"\n rome[i].first = "<<rome[i].first;
            n = n - rome[i].first;
            cout<<"\n n = "<<n;
        }
        return ans;

    }
};

int main(){

    cout<<"Enter the number to be converted to roman numeral"<<endl;
    Solution s;
    cout<<"\n"<<s.intToRoman(10);

}