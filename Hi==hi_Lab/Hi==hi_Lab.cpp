#include <iostream>
using namespace std;

int main() {


    
    return 0;
}

bool strcmp_case_insensitive(string a, string b) {

    if(toLower(a) == toLower(b)) {

        return true;
    }

    return false;
}

string toLower(string str) {

    for(char a: str) {

        a = tolower(a);
    }

    return str;
}
