#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double nbre1 = 3, nbre2 = 3.0, nbre3 = 6.2, nbre4 = 8.222, nbre5 = 8.229, nbre6 = 17, undouble = 33.986;
    char chaine[] = "abcd";

    // Print the notes
    cout << "Notes: " << endl;
    cout << "- La precision est la meme pour toutes les valeurs d'une ligne" << endl;
    cout << "- un setw(10) est utilise pour tous les affichages" << endl;
    cout << "Affichage de la partie 1: " << endl;

    // Mettre en place la precision 2 pour tous les affichages de cette ligne
    
    cout << setw(10) << (int)nbre1 << setw(10) << nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << nbre6 << endl;
    
    cout << setprecision(1) << fixed;
    
    cout << setw(10) << (int)nbre1 << setw(10) << (int)nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << (int)nbre6 << endl;
    
    cout << setprecision(4) << defaultfloat;
    
    cout << setw(10) << (int)nbre1 << setw(10) << (int)nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << (int)nbre6 << endl;

    // set the precision to 2 decimal points
    cout << setprecision(2) << fixed;
    
    cout << setw(10) << nbre1 << setw(10) << nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << nbre6 << endl;

    // set the precision to 6 decimal points
    cout << setprecision(6) << fixed;
    
    cout << setw(10) << nbre1 << setw(10) << nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << nbre6 << endl;

    // Série 2
    cout << "Serie 2:" << endl;
    cout << setw(10) << chaine << setw(10) << undouble << endl;
    cout.precision(1);
    cout << setw(10) << left << chaine << setw(10) << right << undouble << endl;
    cout.precision(4);
    cout << setw(10) << undouble << endl;
    cout << "Fin de la partie 1:" << endl;
    
    // Conversion factors
    const double KM_TO_MILES = 0.621371192;
    const double CELSIUS_TO_FAHRENHEIT = 9.0 / 5.0;

    // Input for distance in km
    double distanceInKm;
    cout << "Entrez la distance en km: ";
    cin >> distanceInKm;

    // Input for temperature in Celsius
    double temperatureInCelsius;
    cout << "Entrez la temperature en Celcius: ";
    cin >> temperatureInCelsius;

    // Conversion and output
    double distanceInMiles = distanceInKm * KM_TO_MILES;
    double temperatureInFahrenheit = temperatureInCelsius * CELSIUS_TO_FAHRENHEIT + 32.0;
    
    // TODO: remove this part
    // Reset display
    cout << resetiosflags(ios::floatfield);
    
    cout << distanceInKm << " km donne " << distanceInMiles << " milles" << endl;
    cout << temperatureInCelsius << " degre Celcius donne " << temperatureInFahrenheit << " degrés Farenheit" << endl;

    // Input for number of credits
    int credits;
    cout << "Entrez le nombre de credits: ";
    cin >> credits;

    // Check for valid input
    
        // Check for different registration categories
        if (credits == 0) {
            cout << "Vous n'etes pas inscrit" << endl;
        }
        else if (credits >= 1 && credits <= 11) {
            cout << "Vous etes inscrit a temps partiel" << endl;
        }
        else if (credits >= 12 && credits <= 17) {
            cout << "Vous etes inscrit a temps plein" << endl;
        }
        else if (credits >= 18 && credits <= 21) {
            cout << "Vous etes inscrit avec autorisation speciale" << endl;
        } else {
            cout << "Erreur, ce nombre est invalide" << endl;
        }



    return 0;
}
