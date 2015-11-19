#include <iostream>

using namespace std;


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
