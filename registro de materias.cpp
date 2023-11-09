#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    std::string nombre;
    int edad;
    std::string grado;
    std::vector<std::string> materias;

    Estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {}

    void mostrar_info() const {
        std::cout << "Nombre: " << nombre << "\nEdad: " << edad << "\nGrado: " << grado << std::endl;
    }

    void registrar_materia(const std::string& materia) {
        materias.push_back(materia);
    }

    void mostrar_materias() const {
        std::cout << "Materias registradas:\n";
        for (const auto& materia : materias) {
            std::cout << "- " << materia << std::endl;
        }
    }
};

int main() {
    Estudiante estudiante1("Juan", 18, "12°");
    estudiante1.mostrar_info();

    estudiante1.registrar_materia("Programacion");
    estudiante1.registrar_materia("Informatica");
    estudiante1.registrar_materia("Rust");

    estudiante1.mostrar_materias();

    return 0;
}
