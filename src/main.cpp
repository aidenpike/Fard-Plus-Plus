#include <iostream>
#include <fstream>

using namespace std;
using std::ios;
using std::ifstream;

int main(){
    ifstream fard;

    //EXTREMELY IMPORTANT:
    cout << "fard" << endl << endl;

    fard.open("fard.frd",ios::in);

    if (fard.is_open()){
        cout << ".frd file found!" << endl;
    }
    else
        cout << ".frd file not found." << endl;
}
