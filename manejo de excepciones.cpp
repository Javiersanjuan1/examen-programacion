#include <iostream>

int dividir(int numerador, int denominador){
    if (denominador == 0)  {
        throw std::runtime_error("Error: División por cero");
    }
    return numerador / denominador;
}

int main() {
    int numerador, denominador, resultado;
    std::cout << "Ingrese el numerador: ";
    std::cin >> numerador;

    std::cout << "Ingrese el denominador: ";
    std::cin >> denominador;

    try{
        resultado = dividir(numerador, denominador);
        std::cout << "Resultado de la division: " << resultado << std::endl;
    } catch (const std::exception& e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
