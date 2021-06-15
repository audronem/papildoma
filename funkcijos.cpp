#include "funkcijos.h"

bool failasegzistuoja(string failas){
    ifstream f(failas);
    bool egzistavimas=f.good();
    f.close();
    return egzistavimas;
}

void nuskaitymas(string failas, map<string, vector<int>>& zodziai, vector<string>& url){
    string eil;
    string zodis;
    istringstream eilutes;
    int eilsk=0;
    ifstream f(failas);
    while(getline(f, eil)){
        eilutes.clear();
        eilutes.str(eil);
        eilsk++;
        while(eilutes>>zodis){
            if(zodis.find("https://")!=string::npos||zodis.find("http://")!=string::npos||zodis.find("www.")!=string::npos){
                url.push_back(zodis);
            }
            else{
                zodis.erase(remove_if(zodis.begin(), zodis.end(), [](char a){return !isalpha(a);}), zodis.end());
                if(zodis!=""){
                    transform(zodis.begin(), zodis.end(), zodis.begin(), [](char a){return tolower(a);});
                    zodziai[zodis].push_back(eilsk);
                }
            }
        }
    }
    f.close();
}

void spausdinimas(map<string, vector<int>>& zodziai, vector<string>& url){
    ofstream o ("lentele.txt");
    o<<left<<setw(20)<<"Zodis"<<setw(20)<<"Pasikartojimai"<<endl;
    o<<string (50, '-')<<endl;
    for(auto z:zodziai)
        if(z.second.size()>1){
            o<<setw(20)<<z.first<<setw(20)<<z.second.size()<<endl;
        }
    ofstream o2("nuorodos.txt");
    o2<<"Nuorodos:"<<endl;
    for(auto u:url){
        o2<<u<<endl;
    }
    ofstream o3("crossreference.txt");
    o3<<left<<setw(20)<<"Zodis"<<setw(20)<<"Eilute"<<endl;
    o3<<string (50, '-');
    for(auto z:zodziai){
        if(z.second.size()>1){
            o3<<endl<<left<<setw(20)<<z.first<<" ";
            for(auto eil:z.second)
            o3<<eil<<" ";
        }
    }
}
