#include <sstream>
#include <string>
#include "Retangulo.h"

using namespace std;

string Retangulo::getAsString() const {
    ostringstream os;

    os << "CSE: " << cse.getAsString() << endl
        << "DIM: " << larg << " * " << alt;

    return os.str();
}