#include "funkcijos.h"

int main(){
    string failopav;
    vector<string> url;
    map<string, vector<int>> zodziai;
    cout<<"Iveskite failo pavadinima (su .txt): ";
    cin>>failopav;
    while(!failasegzistuoja(failopav)){
        cout<<"Toks failas neegzistuoja! Patikrinkite, ar ivestis buvo teisinga ir bandykite dar karta: ";
        cin>>failopav;
    }
    nuskaitymas(failopav, zodziai, url);
    spausdinimas(zodziai, url);
}
