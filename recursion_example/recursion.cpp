#include "recursion.hpp"

int all_combinations::itterative(int n){

    std::stringstream ss;

    for (int i=0; i < n; i++){
        for (int j = 0; j<n; j++) {
            ss << i;
        }
        ss<<"\n";
    }
    std::string s = ss.str();
    std::cout << s << std::endl;

    return 0;
}
int all_combinations::recursive(int n){

    return 0;
}
