#include<iostream>
using namespace std;
int main(){
    char s[50] = "Tai khoan +6,438,000VND";
    
    int money = 0;
    for(int i = 0; s[i]; i++)
    {
        if(s[i] < '0'|| s[i] > '9' || s[i] == ',') continue;
        money = money*10 + (s[i] - '0');
    }
    cout<<money<<endl;
    int i = 0, j =0;
    while(s[i]){
        if(s[i] != ' ') s[j++] = s[i];
        i++;
    }
    s[j] = '\0';

    cout<<s<<endl;
    return 0;
}