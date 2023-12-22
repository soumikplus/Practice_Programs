#include<iostream>
using namespace std;
int  length(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[100];
    cout << "Enter the name :" ;
    cin >> name;  
    cout << name << endl;;
    int count = length(name);
    cout << count;
return 0;
}