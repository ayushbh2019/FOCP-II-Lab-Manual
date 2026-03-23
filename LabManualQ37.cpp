#include<iostream>
using namespace std;
int main(){
    string s; cin>>s;
    bool valid=true;
    for(char c:s){
        if(!(isalnum(c))) valid=false;
    }
    cout<<(valid?"Valid":"Invalid");
}