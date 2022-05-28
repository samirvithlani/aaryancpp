#include<iostream>
#include<string>
using namespace std;


int main()
{

    //string s1 = "Hello";
    string s1,s2;
    char ch[15];
    cout<<"\n pls enter your name";
    //cin>>s1;
    getline(cin,s1);
    
    cout<<""<<s1<<endl;

    s1.push_back('#');
    cout<<""<<s1<<endl;
    //it reomves the last character
    s1.pop_back();
    cout<<""<<s1<<endl;

    int len = s1.length();
    cout<<"\n length of string is "<<len<<endl;

    //s2 = s1;
    //s1.copy(ch,0,5);

    auto x =s1.find("a");
    auto y = s1.find_last_of("a");
    cout<<"\n find --->"<<x<<endl;
    cout<<"\n find --->"<<y<<endl;

    //s1.append("####");
    //s1.append("#",0,5);
    //s1.append("#",1);
    s1.insert(1,"####");
    cout<<"\n after append s1 = "<<s1;
    cout<<"\n 0th index"<<s1.at(0);
    s1.at(0) = 'A';
    cout<<"\n after changing 0th index -->"<<s1;
   // s1.erase(0,2);
    cout<<"\n after erasing 0th index -->"<<s1;
    //s1.erase(2);
    cout<<"\n after erasing 0th index -->"<<s1;
    //s1.clear();
    
    


    

}