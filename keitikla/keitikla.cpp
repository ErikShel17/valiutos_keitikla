#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double GBP_Pirkti = 0.8600;
    double GBP_Parduoti = 0.9220;

    double USD_Pirkti = 1.1460;
    double USD_Parduoti = 1.2340;

    double INR_Pirkti = 101.3862;
    double INR_Parduoti = 107.8546;

    int pasirinkimas = -1;

    cout << fixed << setprecision(2);

    while (pasirinkimas != 0) {

        cout << "\n=== Valiutu keitykla ===" << endl;
        cout << "1 - Palyginti kursa" << endl;
        cout << "2 - Pirkti valiuta" << endl;
        cout << "3 - Parduoti valiuta" << endl;
        cout << "0 - Iseiti" << endl;
        cout << "Pasirinkite: ";
        cin >> pasirinkimas;

        if (pasirinkimas == 0) {
            cout << "Programa baigta." << endl;
            break;
        }

        int valiuta;
        double kiekis;

        cout << "\nPasirinkite valiuta:" << endl;
        cout << "1 - GBP" << endl;
        cout << "2 - USD" << endl;
        cout << "3 - INR" << endl;
        cout << "Pasirinkite: ";
        cin >> valiuta;

        if (pasirinkimas == 1) {

            if (valiuta == 1)
                cout << "1 EUR = " << GBP_Pirkti << " GBP (pirkimas)" << endl;
            else if (valiuta == 2)
                cout << "1 EUR = " << USD_Pirkti << " USD (pirkimas)" << endl;
            else if (valiuta == 3)
                cout << "1 EUR = " << INR_Pirkti << " INR (pirkimas)" << endl;
            else
                cout << "Neteisinga valiuta." << endl;
        }

        else if (pasirinkimas == 2) {

            cout << "Iveskite kiek EUR norite keisti: ";
            cin >> kiekis;

            if (valiuta == 1)
                cout << "Gausite: " << kiekis * GBP_Pirkti << " GBP" << endl;
            else if (valiuta == 2)
                cout << "Gausite: " << kiekis * USD_Pirkti << " USD" << endl;
            else if (valiuta == 3)
                cout << "Gausite: " << kiekis * INR_Pirkti << " INR" << endl;
            else
                cout << "Neteisinga valiuta." << endl;
        }

        else if (pasirinkimas == 3) {

            cout << "Iveskite kiek valiutos norite parduoti: ";
            cin >> kiekis;

            if (valiuta == 1)
                cout << "Gausite: " << kiekis * GBP_Parduoti << " EUR" << endl;
            else if (valiuta == 2)
                cout << "Gausite: " << kiekis * USD_Parduoti << " EUR" << endl;
            else if (valiuta == 3)
                cout << "Gausite: " << kiekis * INR_Parduoti << " EUR" << endl;
            else
                cout << "Neteisinga valiuta." << endl;
        }

        else {
            cout << "Neteisingas pasirinkimas." << endl;
        }
    }

    return 0;
}