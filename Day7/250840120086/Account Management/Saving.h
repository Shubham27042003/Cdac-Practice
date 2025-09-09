#include"Account.h"

class Saving:public Account{
private:
    int chBookNumber;
    static double minBal;
public:
    //constructors
    Saving();
    Saving(const char* fn,const char* ln,const char* con,const char em[20],double bal,int cbn);

    //destructor
    ~Saving();
    
    //setters
    void setChBookNumber(int cbn);

    //getters
    double getChBookNumber();

    //display
    void display()const;
};

