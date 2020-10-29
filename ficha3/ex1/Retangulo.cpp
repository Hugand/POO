#include "Retangulo.h"
#include <sstream>
#include <string>

using namespace std;

string Retangulo::getAsString() const {
    ostringstream os;

    os << "CSE: " << cse.getAsString() << endl
        << "DIM: " << larg << " * " << alt;

    return os.str();
}