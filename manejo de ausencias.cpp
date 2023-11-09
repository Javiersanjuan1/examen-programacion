#include <iostream>
#include <string>

class RegistroAsistencia {
public:
    std::string fecha, estado;

    RegistroAsistencia(std::string f, std::string e) : fecha(f), estado(e) {}

    void mostrar_asistencia() const {
        std::cout << "Fecha: " << fecha << "\nEstado: " << estado << std::endl;
    }
};

int main() {
    RegistroAsistencia r1("2020-2-03", "Asistió"), r2("2022-2-12", "Falta");
    r1.mostrar_asistencia(); std::cout << "-------------------------\n"; r2.mostrar_asistencia();
    return 0;
}
