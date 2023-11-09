#include <iostream>
#include <vector>
#include <string>

class Estudiante {
public:
    std::string nombre, grado;
    int edad;

    Estudiante(std::string n, int e, std::string g) : nombre(n), edad(e), grado(g) {}
};

std::vector<Estudiante> filtrarPorGrado(const std::vector<Estudiante>& estudiantes, const std::string& grado) {
    std::vector<Estudiante> filtrados;

    for (const auto& estudiante : estudiantes) {
        if (estudiante.grado == grado) {
            filtrados.push_back(estudiante);
        }
    }

    return filtrados;
}

int main() {
    std::vector<Estudiante> estudiantes = {
            {"Juan", 18, "12°"},
            {"Ana", 17, "11°"},
            {"Carlos", 19, "12°"},
            {"Laura", 16, "10°"}
    };

    std::string gradoBuscado = "12°";

    std::cout << "Estudiantes en el grado " << gradoBuscado << ":\n";
    for (const auto& estudiante : filtrarPorGrado(estudiantes, gradoBuscado)) {
        std::cout << "- " << estudiante.nombre << std::endl;
    }

    return 0;
}



