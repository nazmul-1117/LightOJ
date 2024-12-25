#include <bits/stdc++.h>

int main(){
    uint16_t c = 0;
    
    for (size_t i = 1000; i >= 1; i--) {
        if(c==5){
            c=0;
            std :: cout << std :: endl;
        }
        std :: cout << i <<" ";
        c++;
    }
    return 0;
}
