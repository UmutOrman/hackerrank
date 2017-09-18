#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell { 
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell { 
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell { 
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell { 
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal;
        }
}; 
string SpellJournal::journal = "";


void counterspell(Spell *spell) {
  Fireball *fire_reveal;
  Frostbite *frost_reveal;
  Waterbolt *water_reveal;
  Thunderstorm *thunder_reveal;
  if(fire_reveal = dynamic_cast<Fireball*>(spell))
    fire_reveal->revealFirepower();  
  else if(frost_reveal = dynamic_cast<Frostbite*>(spell))
    frost_reveal->revealFrostpower(); 
  else if(water_reveal = dynamic_cast<Waterbolt*>(spell))
    water_reveal->revealWaterpower();  
  else if(thunder_reveal = dynamic_cast<Thunderstorm*>(spell))
    thunder_reveal->revealThunderpower();
  else{
    //LCS problem
    int i,j; 
    string X =  spell->revealScrollName();
    int m = X.size();
    string Y = SpellJournal::journal;
    int n = Y.size();  
    int L[m+1][n+1];
    for (i=0; i<=m; i++){
     for (j=0; j<=n; j++){
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else{
	 if(L[i-1][j] >= L[i][j-1])
	   L[i][j] = L[i-1][j];
	 else
	   L[i][j] = L[i][j-1];
       }
     }
    }
    cout << L[m][n] << endl;
  }
    
}


class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            string s; cin >> s;
            int power; cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            } 
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}
