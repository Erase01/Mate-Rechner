// created by @fingadumbledore & @hyperbel
// Eine Mateflasche = 500 Ml
// Das Projekt ist nur zum Spaß und Sollte nicht Ernst genommen werden
// Der Konsum von zu viel Zucker und Koffein ist nicht Gesund und kann Gesundheitliche Schäden bewirken
// Version 1.3
#include <iostream>
using namespace std;
int main(){
    int  mate, Koffeingehalt, marke, kmenge, ergebnis;
    string input, markenname;

    cout << "  **     **     **                   **                        \n";
    cout << "  **     **     **        ++         **                        \n";
    cout << " ****   ****   ****       ++        ****                       \n";
    cout << " ****   ****   ****    ++++++++     ****                       \n";
    cout << " ****   ****   ****       ++        ****                       \n";
    cout << " ****   ****   ****       ++        ****                       \n";
    cout << "Dieser Rechner weiß wie viel Mate du am Tag brauchst!\nkennst du die anzahl? J/N\ninput:";
    cin >> input;
    if (input == "J" || input == "j")
    {
        system("clear");
        cout << "****************************************************************\n" 
         << "* [i] Bitte gib die Anzahl der Mateflaschen an die du brauchst *\n" 
         << "****************************************************************\n\n" 
         << "input: ";
        cin >> mate;
        if (mate < 2){
            cout << "Für einen erfolgreichen Tag benötigst du mehr als 1 Flasche Mate";
            return 0;
        }
        cout << "Marke [1] Mio Mio Mate [2] Club Mate [3] Buenos Mate [4] Mate Mate [5] Flora Mate [6] 1337 Mate [7] Charitea Mate [8] Bionade Mate\n"
        << "input: ";
        cin >> marke;
            mate = mate +1;
            switch (marke)
            {
                case 1:
                case 2:
                case 3:
                    Koffeingehalt = mate * 100;
                    break;
                case 5:
                    Koffeingehalt = mate * 90;
                    break;
                case 4:
                    Koffeingehalt = mate * 150;
                    break;
                case 6:
                    Koffeingehalt = mate * 145;
                    break;
                case 7:
                    Koffeingehalt = mate * 15;
                    break;
                case 8:
                    Koffeingehalt = mate * 20;
                    break;
                default:
                    cout << "Dies ist keine gute Sorte, bitte reiche \neine pull request auf github ein\n";
                    break;
            }


        cout <<"du brauchst " <<mate <<" Flaschen Mate!!!\n"
             <<"der Koffeingehaltfür deine "<< mate<< " Flaschen liegt bei "<< Koffeingehalt << " mg.\n\n"
             <<"Ein hyperbel sagte: du brauchst immer eine Mateflasche mehr als du hast\n\n"
             <<"--------------------------------[Hinweis]--------------------------------\n"
             <<"Bitte Beachte: Erhöhter Koffeingehalt. Für Kinder und schwangere oder stillende Frauen nicht empfolen\n\n";

    }
    
    else if (input == "N" || input == "n")
    {
        system("clear");
        cout << "Bitte gebe an wie viel Koffein du heute zu dir nehmen willst (in mg).\ninput: ";
        cin >> kmenge;
        cout << "Folgende Marken stehen zu verfügung\n";
        cout << "Marke [1] Mio Mio Mate [2] Club Mate [3] Buenos Mate [4] Mate Mate [5] Flora Mate [6] 1337 Mate [7] Charitea Mate [8] Bionade Mate\ninput:";
        cin >> marke;
        switch (marke)
        {
        case 1:
            Koffeingehalt = 100;
            markenname = "Mio Mio";
            break;
        case 2:
            Koffeingehalt = 100;
            markenname = "Club Mate";
            break;
        case 3:
            Koffeingehalt = 90;
            markenname = "Flora Mate";
            break;
        case 4: 
            Koffeingehalt = 150;
            markenname = "Mate Mate";
            break;
        case 5: 
            Koffeingehalt = 100;
            markenname = "Buenos Mate";
            break;
        case 6: 
            Koffeingehalt = 145;
            markenname = "1337 Mate";
            break;
        case 7: 
            Koffeingehalt = 15;
            markenname = "Charitea Mate";
            break;
        case 8:
            Koffeingehalt = 20;
            markenname = "Bionade Mate";
            break;
        default:
            break;
        }
        ergebnis = kmenge / Koffeingehalt;
        cout << "Für deinen Tag benötigst du " << ergebnis << " Flaschen " << markenname <<"\n"
        <<"--------------------------------[Hinweis]--------------------------------\n"
        <<"Bitte Beachte: Erhöhter Koffeingehalt. Für Kinder und schwangere oder stillende Frauen nicht empfolen\n\n";
    }
    
    else 
        cout << "Error";
}

