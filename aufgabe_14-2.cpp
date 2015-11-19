#include <iostream>

using namespace std;

int algOtag(int y)
{
    int n(0), a(0), b(0), m(0), q(0), w(0), k(25);

    n = y - 1900;
    a = n % 19;
    b = ((7 * a) + 1) / 19;
    m = (((11 * a) + 4) - b) % 29;
    q = n / 4;
    w = (((n + q) + 31) -m) % 7;
    k = (k -m) -w;

    return k;
}

int main()
{
    //Definitionen
    int jahr(0), ende(0);

    //einlesen von dem Jahr
    cout << "Ostern herausfinden!" << endl;
    cout << "Bitte ein Jahr zwischen 1900 und 2099 eingeben:" << endl;
    cin >> jahr;
	
    //überprüfen ob jahr im richtigen zeitabschnitt
    if (jahr >= 1900 && jahr <= 2099){
        //ausführung programm

        ende = algOtag(jahr); //hajr an function schicken und ergebniss "ende" zuweisen
	}

	
    return 0;
}
