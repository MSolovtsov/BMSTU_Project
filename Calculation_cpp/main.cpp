#include <iostream>
#define  PI 3.1415

using namespace std;

int main() {

    double P_eng; // Мощность двигателя  (Вт)

    double f = 280.f; // Шаг/с номин.
    const double alph = 22.5; // градусов


    double n_nom = f / alph; //
    double w_nom = (PI * n_nom) / 30.f; // угловая скорость (рад/с)
    double M_nom = 0.16; // Номинальный момент (Н*м)
    P_eng = M_nom * w_nom;

    cout << "P engine: " << P_eng << endl;


    // =============================
    double P_eng_col;

    double w_out = (12 * PI) / 180;
    cout << "\n" << w_out << endl;
    double M_extra_out = 22;
    double P_n = M_extra_out * w_out;

    double E = 1.2;
    double N0 = 0.8;
    P_eng_col = E * (P_n / N0);

    cout << "P eng. calculation: " << P_eng_col << endl;





    return 0;
}
