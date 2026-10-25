#include <iostream>
using namespace std;

class Sword
{
private:
    unsigned int damage;

public:
    Sword() : damage{10} {}
    virtual ~Sword() = default;

    unsigned int getDamage() const
    {
        return damage;
    }

    void setDamage(unsigned int damage_)
    {
        damage = damage_;
    }
    virtual void attack() const
    {
        cout << "Daño base: " << damage << endl;
    }
};

class DrakeSword : public Sword
{
private:
    unsigned int damageBonus;

public:
    DrakeSword() : damageBonus{10} {}
    void attack() const override
    {
        cout << "DrakeSword Attack: " << getDamage() + damageBonus << endl;
    }
};

class SealSword : public Sword
{
private:
    unsigned int damageBonus;

public:
    SealSword() : damageBonus{30} {}
    void attack() const override
    {
        cout << "SealSword Attack: " << getDamage() + damageBonus << endl;
    }
};

class Player
{
private:
    string nick;
    Sword *sword = nullptr;

public:
    Player(const string &nick_) : nick{nick_} {}
    Player(const string &nick_, Sword &sword_) : nick{nick_}, sword{&sword_} {}

    void equip(Sword &weapon_)
    {
        sword = &weapon_;
    }

    // Dynamic polymorphism through a reference
    void attack(const Sword &sword) const
    {
        sword.attack();
    }

    // Dynamic polymorphism through a pointer
    void attack() const
    {
        if (sword)
        {
            sword->attack();
        }
        else
        {
            cout << "No sword equipped" << endl;
            return;
        }
    }
};

int main()
{
    DrakeSword DS;
    SealSword SS;

    Sword &S1 = SS;
    S1.attack();

    // Dynamic polimorphism

    cout << "Player 1" << endl;
    Player P1("gokz");
    // Pass by reference
    P1.attack(SS);
    P1.equip(DS);
    P1.attack();

    cout << "Player 2" << endl;

    Player P2("GK");
    P2.equip(SS);
    P2.attack();
    P2.equip(DS);
    P2.attack();

    cout << "Player 3" << endl;

    Player P3("GKz", SS);
    P3.attack();
    P3.equip(DS);
    P3.attack();

    return 0;
}