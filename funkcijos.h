#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <iomanip>
#include <algorithm>

using namespace std;

bool failasegzistuoja(string);

void nuskaitymas(string, map<string, vector<int>>&, vector<string>&);

void spausdinimas(map<string, vector<int>>&, vector<string>&);
