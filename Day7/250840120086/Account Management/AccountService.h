#include"Account.h"

const int MAX_ACC=100;

class AccountService
{
private:
    static Account* accounts[MAX_ACC];
    static int count;
public:
    static void addAccount(int ch);
    static void displayAllAccounts();
    static Account* searchByAccNumber(const char* accId);
    static void searchByName(const char* fN,const char* lN);
    static void sortByBalance();
    static void displayAllSaving();
    static void displayAllCurrent();
    static void cleanup();
};



