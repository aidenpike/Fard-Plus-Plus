#include <iostream>
#include <fstream>

using namespace std;
using std::ios;
using std::ifstream;

int main(){
    ifstream fard;

    //EXTREMELY IMPORTANT:
    cout << "fard" << endl;

    fard.open("fard.fpp",ios::in);

    if (fard.is_open()){
        cout << ".fpp file found!" << endl;
    }
    else
        cout << ".fpp file not found." << endl;
}
