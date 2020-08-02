#include "../include/Account.class.hpp"
#include <iostream>
#include <ctime>

#define GREEN "\033[35m"
#define NC "\033[0m"

int Account::getNbAccounts(void)
{
  return _nbAccounts;
}

int Account::getTotalAmount(void)
{
  return _totalAmount;
}

int Account::getNbDeposits(void)
{
  return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
  return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
  std::cout << "\n  ";
  _displayTimestamp();
  std::cout << "accounts:" << GREEN << getNbAccounts() << NC << ";";
  std::cout << "total:" << GREEN << getTotalAmount() << NC << ";";
  std::cout << "deposits:" << GREEN << getNbDeposits() << NC << ";";
  std::cout << "withdrawals:" << GREEN << getNbWithdrawals() << NC << "\n\n";
  return;
}

Account::Account(int initial_deposit)
{
  _accountIndex = getNbAccounts();
  _amount = initial_deposit;
  _nbDeposits = 0;
  _nbWithdrawals = 0;

  _nbAccounts++;
  _totalAmount += initial_deposit;
  _displayTimestamp();
  std::cout << "index:" << GREEN << _accountIndex << NC << ";";
  std::cout << "amount:" << GREEN << checkAmount() << NC << ";";
  std::cout << "created\n";
  return;
}

Account::~Account(void)
{
  _displayTimestamp();
  std::cout << "index:" << GREEN << _accountIndex << NC << ";";
  std::cout << "amount:" << GREEN << checkAmount() << NC << ";";
  std::cout << "closed\n";
  return;
}

void Account::makeDeposit(int deposit)
{
  _totalNbDeposits++;
  _nbDeposits++;
  _displayTimestamp();
  std::cout << "index:" << GREEN << _accountIndex << NC << ";";
  std::cout << "p_amount:" << GREEN << checkAmount() << NC << ";";
  std::cout << "deposit:" << GREEN << deposit << NC << ";";
  _amount += deposit;
  _totalAmount += deposit;
  std::cout << "amount:" << GREEN << checkAmount() << NC << ";";
  std::cout << "nb_deposits:" << GREEN << _nbDeposits << NC << "\n";
  return;
}

bool Account::makeWithdrawal(int withdrawal)
{
  _displayTimestamp();
  std::cout << "index:" << GREEN << _accountIndex << NC << ";";
  std::cout << "p_amount:" << GREEN << checkAmount() << NC << ";";
  std::cout << "withdrawal:";
  if (_amount < withdrawal)
  {
    std::cout << "refused\n";
    return false;
  }
  else
  {
    std::cout << GREEN << withdrawal << NC << ";";
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << "amount:" << GREEN << checkAmount() << NC << ";";
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << "nb_withdrawals:" << GREEN << _nbWithdrawals << NC << "\n";
    return true;
  }
}

int Account::checkAmount(void) const
{
  return _amount;
}

void Account::displayStatus(void) const
{
  _displayTimestamp();
  std::cout << "index:" << GREEN << _accountIndex << NC << ";";
  std::cout << "amount:" << GREEN << checkAmount() << NC << ";";
  std::cout << "deposits:" << GREEN << _nbDeposits << NC << ";";
  std::cout << "withdrawals:" << GREEN << _nbWithdrawals << NC << "\n";
  return;
}

void Account::_displayTimestamp(void)
{
  time_t time_in_sec_since_1970;
  tm *tm_time;
  char timestamp[19];

  time(&time_in_sec_since_1970);
  tm_time = localtime(&time_in_sec_since_1970);
  strftime(timestamp, sizeof(timestamp), "[%Y%m%d_%H%M%S] ", tm_time);
  std::cout << timestamp;
  return;
}

Account::Account(void)
{
  _accountIndex = getNbAccounts();
  _amount = 0;
  _nbDeposits = 0;
  _nbWithdrawals = 0;

  _nbAccounts++;
  _totalAmount += 0;

  _displayTimestamp();
  std::cout << "index:" << GREEN << _accountIndex << NC << ";";
  std::cout << "amount:" << GREEN << checkAmount() << NC << ";";
  std::cout << "created\n";
  return;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
