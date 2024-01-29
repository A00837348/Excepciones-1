#include <iostream>

int main() {
    double numerador, denominador;
    
    std::cout << "Ingrese el numerador: ";
    std::cin >> numerador;
    
    std::cout << "Ingrese el denominador: ";
    std::cin >> denominador;
    
    try {
        if (denominador == 0) {
            throw std::runtime_error("Error: División por cero.");
        }
        double resultado = numerador / denominador;
        std::cout << "El resultado de la división es: " << resultado << std::endl;
    } catch(const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}