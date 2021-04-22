#include <iostream>
#include <string>
using namespace std;

int countChar(string pName){
int count = 0;
for(int i = 0; i < pName.length(); i++){
count = count + 1;
}
return count;
}
int countLine(string pName){
return 0;
}
int main(int argc, char** argv){

    if(argc == 1){
        cout << "no command line" << endl;
    }
    else {
        cout << "command line" << endl;
    }
    cout << countChar("Ohio University") << endl;

    
}