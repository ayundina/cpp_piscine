// the accounts of the bank’s customers

#include "../include/Account.class.hpp"

static int getNbAccounts(void);
static int getTotalAmount(void);
static int getNbDeposits(void);
static int getNbWithdrawals(void);
static void displayAccountsInfos(void);

Account(int initial_deposit);
~Account(void);

void makeDeposit(int deposit);
bool makeWithdrawal(int withdrawal);
int checkAmount(void) const;
void displayStatus(void) const;

static void _displayTimestamp(void);

Account(void);