#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin>>t;
    int input;
    for(int i=0;i<t;i++){
        std::cin >> input;
        if(input%2==0){
            std::cout << (int)(log2(input) + 0.5);
        }
        else{
            std::cout << (int)(log2(input - 1) + 0.5);
        }
        if(i<t-1){
            std::cout<<std::endl;
        }
    }
    return 0;
}
