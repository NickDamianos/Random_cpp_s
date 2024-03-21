#include <iostream>

using namespace std;

class Weapon{
   string weaponName;

public:
    Weapon(string weaponName){
        this->weaponName = weaponName;
        cout << "Weapon created" << endl;
    }
    
    void set_weaponName(string weaponName){
        this->weaponName = weaponName;
    }
    
    string get_weaponName(){
        return weaponName;
    }
    
    ~Weapon(){
        cout << "Weapon destroyed" << endl;
    }



};

class Samurai {
    string samuraiWeapon;
    int age;
    
public:
    Samurai(int age){
        this->age = age;
        samuraiWeapon = "no Weapon";
    }
    
    void set_samuraiWeapon(string samuraiWeapon){
        this->samuraiWeapon = samuraiWeapon;
    }
    
    string get_samuraiWeapon(){
        return samuraiWeapon;
    }
    
    void set_age(int age){
        this->age = age;
    }
    
    int get_age(){
        return age;
    }
    
    void pickWeapon(Weapon &a){
        if(age < 18){
            samuraiWeapon = "Wooden Sword";
        } else {
            samuraiWeapon = a.get_weaponName();
        }
    }
    
};

string duelForYoungSamurais(Samurai &a , Samurai &b){
    if(a.get_age() > 18 || b.get_age() > 18){
        return "Invalid duel";
    }
    else if (a.get_samuraiWeapon() != "Wooden Sword" || b.get_samuraiWeapon() != "Wooden Sword"){
        return "Duel postponed";
    }
    
    return "A duels B"; // A kai B prepei na mpoun ta onomata ,o orismos tis  Samurai klash einai stin deuterh ergasia 
}

string duelWithWeapons(Samurai &a , Samurai &b){
    if(a.get_age() < 18 || b.get_age() < 18){
        return "This duel is for adults only!";
    } 
    string aW = a.get_samuraiWeapon();
    string bW = b.get_samuraiWeapon();
    
    
    //opou A h B onoma Samurai
    
    
    if ((aW == "Rock" || aW == "Scissors" || aW == "Paper") && (bW == "Rock" ||  bW == "Scissors" || bW == "Paper")){
        if (aW == bW){
            return "The duel is draw";
        } else if (aW == "Rock" && bW == "Scissors"){
            return "A";
        } else if (aW == "Scissors" && bW == "Rock"){
            return "B";//b.getName
        } else if (aW == "Scissors" && bW == "Paper"){
            return "A";//a.get_name())
        } else if (aW == "Paper" && bW == "Scissors" ){
            return "B";
        } else if (aW == "Paper" && bW == "Rock"){
            return "A";
        } else {
            return "B";
        }
    } else {
        return "Strange Duel!";
    }    
    
    
    
    
}









int main(int argc, char** argv) {
    Weapon x("Paper");
    Weapon y("Scissors");
    Weapon z("Rock");
    
    Samurai k(12);
    Samurai l(13);
    
    Samurai g(21);
    Samurai h(31);
    
    g.pickWeapon(z);
    h.pickWeapon(y);
    k.pickWeapon(z);
    l.pickWeapon(z);
    
    
    cout << "Adults : " << duelWithWeapons(g , h) << endl;
    cout << "Young : " << duelForYoungSamurais(k ,l) << endl;
    
    return 0;
}

