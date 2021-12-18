#include<string.h>
#include<vector>
usinng namespace std
struct skill
{
    string name;
    vector<int> exec;
};

class ch
{
private:
    /* data */
public:
    string name;
    vector<skill> skills;
    int hp;
    int max_hp;
    ch(string n, int h);
    ~ch();
    lose_hp(int n);
};

ch::ch(string n, int h)
{
    name=n;
    max_hp=h;
    hp=h;
}

ch::~ch()
{
}
ch::lose_hp(int n){
    hp-=n;
}
