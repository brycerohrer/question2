#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <catch_amalgamated.hpp>

using namespace std;
/** @brief function to count characters from given input
    @param pName this is the inputted string
*/
int countChar(string pName){
int count = 0;
for(int i = 0; i < pName.length(); i++){
count = count + 1;
}
return count;
}

/**
    @brief function to count lines in given string
    @param pName this is the inputted parameter
*/
int countLine(string pName){
    ifstream inFile("file.txt"); 
    count(std::istreambuf_iterator<char>(inFile), 
    std::istreambuf_iterator<char>(), '\n');
    
return 0;
}
/**
 * @brief main function for this program
 * */
int main(int argc, char** argv){

    if(argc == 1){
        cout << "no command line" << endl;
         cout << countChar("Ohio University") << endl;
        cout << countLine("Athens") << endl;
    }
    else { // read from file 
    string filename = argv[1];
    cout << filename << endl;
    cout << filename + ".txt" << endl;
    ifstream inFile(filename +".txt");
    count(std::istreambuf_iterator<char>(inFile), 
    std::istreambuf_iterator<char>(), '\n');
    }

    
}
TEST_CASE( "Output is computed" ) {
    REQUIRE( countChar("Dogs") == 3 );
    REQUIRE( countChar("CS3560") == 6 );
    REQUIRE( countChar("Woman") == 5 );
}