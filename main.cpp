#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;

void foo (char* testNum){
    cout << testNum << std::endl;
}

int main(int argc, char **argv) {
    for(auto i = 0; i < argc; ++i){
        cout << i << std::endl;
    }

    foo(argv[2]);
    
    return 0;
}