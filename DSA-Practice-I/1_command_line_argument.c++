// command line --> pip install in python
// command line are used to supply parameter to the program
// arguuments are passed to the main function
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "The value of argc is " << argc << endl;
    for(int i = 0 ;i<argc;i++){
        cout << "This argument at index number " << i <<  " has value of " << argv[i]<< endl;
    }
    return 0;
}



