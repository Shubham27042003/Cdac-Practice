#include"Account.h"

class Current:public Account{
private:
    double avgAnnubal;
    int noOfTrans;
    static double minBal;
public:
    //constructors
    Current();
    Current(const char* fn,const char* ln,const char* con,const char em[20],double bal,double aBal,int nt);

    //destructor
    ~Current();
    
    //setters
    void setAvgAnnualBal(double aBal);
    void setNoOfTransation(int nt);

    //getters
    double getAvgAnnualBal();
    int getNoOfTransation();

    //display
    void display()const;
};

