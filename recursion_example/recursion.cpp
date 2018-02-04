#include "recursion.hpp"

int all_combinations::itterative(int k, int n){

    std::stringstream ss;

    for (int i=0; i < n; i++){
        for (int j = 0, z =1; j<n; j++, z++) {
            if (z % n == 0)
                ss << n;
            else
                ss << z%n;

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
