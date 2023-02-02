/*
This is a C++ program that demonstrates various formatting options for displaying variables, such as setting width, precision, and field flags for floating-point numbers, as well as casting floating-point numbers to integers. Additionally, it also shows how to perform conversions from kilometers to miles and from Celsius to Fahrenheit, and how to handle input from the user. Finally, it also checks if a number of credits input by the user falls within certain categories and outputs a message accordingly.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Define variables to be used in the program
    double nbre1 = 3, nbre2 = 3.0, nbre3 = 6.2, nbre4 = 8.222, nbre5 = 8.229, nbre6 = 17, undouble = 33.986;
    char chaine[] = "abcd";

    // Print the notes
    cout << "Notes: " << endl;
    cout << "- La precision est la meme pour toutes les valeurs d'une ligne" << endl;
    cout << "- un setw(10) est utilise pour tous les affichages" << endl;
    cout << "Affichage de la partie 1: " << endl;

    // Use precision of 2 for all displays in this line
    cout << setw(10) << (int)nbre1 << setw(10) << nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << nbre6 << endl;
    
    // Use precision of 1 for all displays in this line
    cout << setprecision(1) << fixed;
    cout << setw(10) << (int)nbre1 << setw(10) << (int)nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << (int)nbre6 << endl;
    
    // Use precision of 4 for all displays in this line
    cout << setprecision(4) << defaultfloat;
    cout << setw(10) << (int)nbre1 << setw(10) << (int)nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << (int)nbre6 << endl;

    // Use precision of 2 for all displays in this line
    cout << setprecision(2) << fixed;
    cout << setw(10) << nbre1 << setw(10) << nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << nbre6 << endl;

    // Use precision of 6 for all displays in this line
    cout << setprecision(6) << fixed;
    cout << setw(10) << nbre1 << setw(10) << nbre2 << setw(10) << nbre3 << setw(10) << nbre4 << setw(10) << nbre5 << setw(10) << nbre6 << endl;

    // Print a header for the second series of displays
    cout << "Serie 2:" << endl;
    
    // Use precision of 6 for this line
    cout << setw(10) << chaine << setw(10) << undouble << endl;
    
    // Use precision of 1 for this line
    cout.precision(1);
    cout << setw(10) << left << chaine << setw(10) << right << undouble << endl; 
    
    // Use precision of 4 for this line
    cout.precision(4);
    cout << setw(10) << undouble << endl;
    cout << "Fin de la partie 1:" << endl;
    
    // Conversion factors
    const double KM_TO_MILES = 0.621371192;
    
    // celsius to fahrenheit: (miles * 9 / 5) + 32
    const double CELSIUS_TO_FAHRENHEIT_MULTIPLY = 9.0 / 5.0;
    const double CELSIUS_TO_FAHRENHEIT_ADD = 32;

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
    double temperatureInFahrenheit = temperatureInCelsius * CELSIUS_TO_FAHRENHEIT_MULTIPLY + CELSIUS_TO_FAHRENHEIT_ADD;
    
    // TODO: remove this part
    // Reset display
    cout << resetiosflags(ios::floatfield);
    
    cout << distanceInKm << " km donne " << distanceInMiles << " milles" << endl;
    cout << temperatureInCelsius << " degre Celcius donne " << temperatureInFahrenheit << " degrés Farenheit" << endl;

    // Input for number of credits
    int credits;
    cout << "Entrez le nombre de credits: ";
    cin >> credits;
    
        // Check for valid input and different registration categories
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
