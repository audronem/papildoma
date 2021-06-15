# Papildoma asociatyvių konteinerių užduotis

Programa nuskaito vartotojo nurodytą failą ir atskiruose tekstiniuose failuose atspausdina 1) žodžius bei jų pasikartojimų skaičių; 2) žodžius ir eilutes, kuriose juos galima rasti; 3) nuorodas, nurodytas tekste.

## Programos veikimas

Paleidus programą, vartotojo prašoma nurodyti tekstinio failo pilną pavadinimą:
```
Iveskite failo pavadinima (su .txt):
```
Įvedus pavadinimą klaidingai, prašoma įvesti dar kartą:
```
Iveskite failo pavadinima (su .txt): dsfsdf
Toks failas neegzistuoja! Patikrinkite, ar ivestis buvo teisinga ir bandykite dar karta: 
```
Įvedus pavadinimą teisingai, programa baigia darbą ir atspausdina tris tekstinius failus: *crossreference.txt*, *lentele.txt* ir *nuorodos.txt*.
## Rezultatų pavyzdžiai
crossreference.txt pavyzdys:
```
Zodis               Eilute              
--------------------------------------------------
and                  1 2 3 
art                  1 2 
centuries            1 3 5 
church               3 3 
churches             2 4 
eg                   2 3 
from                 1 2 3 5 
gothic               2 4 5 
in                   2 3 3 
of                   1 1 2 2 3 3 3 4 4 
paintings            2 3 
remained             2 5 
st                   3 3 
th                   2 3 5 
the                  1 2 2 2 3 3 3 4 4 5 5 5 
to                   2 4 
vilnius              1 2 3 4 
were                 3 4 
```
lentele.txt pavyzdys:
```
Zodis               Pasikartojimai      
--------------------------------------------------
and                 3                   
art                 2                   
centuries           3                   
church              2                   
churches            2                   
eg                  2                   
from                4                   
gothic              3                   
in                  3                   
of                  9                   
paintings           2                   
remained            2                   
st                  2                   
th                  3                   
the                 12                  
to                  2                   
vilnius             4                   
were                2                   
```
nuorodos.txt pavyzdys:
```
Nuorodos:
https://en.wikipedia.org/wiki/Vilnius
https://en.wikipedia.org/wiki/Gothic_art
https://en.wikipedia.org/wiki/Liturgy
https://en.wikipedia.org/wiki/Vilnius_Cathedral
```
## Įdiegimas
**Iš „Releases“ atsisiųskite norimą programos versiją ir ją išarchyvuokite.**  
Jei turite GNU Make, tereikia komandinėje eilutėje (kurioje nurodyta programos direktorija) parašyti
```
make
```
ir
```
./programa
```
Kitu atveju komandinėje eilutėje (kurioje nurodyta programos direktorija) rašykite:
```
g++ -std=c++11 *.cpp -o programa
```
ir
```
./programa
```
