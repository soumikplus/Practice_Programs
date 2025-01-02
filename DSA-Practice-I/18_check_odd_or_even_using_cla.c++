#include<iostream>
using namespace std;
int check(int n){
    return n&1;
}
int main(int argc,char* argv[]){
    int num,res = 0;
    if(argc == 1 ){
        cout << "No command line arguments found" << endl;
    }
    else{
        num = atoi(argv[1]);
        res = check(num);
        if(res == 0)
        cout << "Even" << endl; 
        else{
        cout << "Odd" << endl;        }
    }
return 0;
}