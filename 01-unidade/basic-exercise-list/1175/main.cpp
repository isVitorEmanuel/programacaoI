#include <iostream>

int main() {
    int vet[20];
    int aux;

    for(int index = 0; index < 20; index++){
        std::cin >> vet[index];
    }

    for(int index = 0; index < 10; index++) {
        std::cout << "vet[" << vet[0 + index] << "] - " << 0 + index << " E "; 
        std::cout << "vet[" << vet[20 - index] <<"] - " << 20 - index << '\n'; 
    }

    for(int index = 0; index < 20; index++){
        std::cout << vet[index] << '\n';
    }
}