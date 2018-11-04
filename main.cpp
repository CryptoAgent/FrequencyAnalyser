#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "FA.h"

using namespace std;
//Frequency analysis on 3 most used letters
int main(){
float freq[26]={8.17,1.49,2.78,4.25,12.7,2.23,2.02,6.09,6.97,0.15,0.77,4.03,2.41,6.75,7.51,1.93,0.1,5.99,6.33,9.06,2.76,0.98,2.36,0.15,1.97,0.05}; //frequency of letters
cout<<"English letter frequency :\r\n";
for(int i = 0;i<26;i++){
    char ch = i+97;
    cout<<ch;
    cout<<"=";
    cout<<freq[i];
    cout<<"%"<<endl;
}
string encr;
ifstream file("C:\\Users\\User\\Desktop\\projects\\FrequencyAnalysis\\text.txt");
getline(file,encr);
int len = GetLen(encr);
int sortt[26]={0};
for(int i = 0;i<len;i++){
    char ch = encr[i];
    if(ch!=' '){
    if(isupper(ch)){
        ch = tolower(ch);
    }
    ch-=97;
    int in_x = (int) ch;
    sortt[in_x]+=1;
    }
}
float summ = 0;
for(int i = 0;i<26;i++){
int n = sortt[i];
summ+=n;
}
summ/=100;
float sorted[26]={0};
for(int i = 0;i<26;i++){
    float n = sortt[i];
    n/=summ;
    sorted[i]=n;
}
cout<<"----------------------------------\r\n";
cout<<"Letter frequency in encrypted text :\r\n";
for(int i,j = 0;i<26;i++){
    char ch = i+97;
    cout<<ch;
    cout<<"=";
    cout<<setprecision(3)<<sorted[i];
    cout<<"%"<<endl;
}
return 0;
}
