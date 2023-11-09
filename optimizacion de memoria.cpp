#include <iostream>
void intercambiar (int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main () {
    int numero1 = 4;
    int numero2 = 9;
    std::cout << "valores reales" << numero1 <<  "y" <<numero2 << std::endl ;
    intercambiar (&numero1, &numero2);
    std::cout << "Intercambiados" << numero1 << "y" <<numero2 <<std::endl;
return 0;
}

