#include <sstream>
#include <string>
#include "Contacto.h"

string Contacto::getAsString() const {
    ostringstream os;

    os << "Nome: " << nome << " Tel: " << tel;

    return os.str();
}