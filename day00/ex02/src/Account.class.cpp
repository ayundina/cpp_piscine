#include "Account.class.hpp"
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
	std::cout << std::endl;
	std::cout << "  ";
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
	std::cout << std::endl;
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
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created";
	std::cout << std::endl;
	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed";
	std::cout << std::endl;
	return;
}

void Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_nbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	return;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused";
		std::cout << std::endl;
		return false;
	}
	else
	{
		std::cout << withdrawal << ";";
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		std::cout << "amount:" << checkAmount() << ";";
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << _nbWithdrawals;
		std::cout << std::endl;
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
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
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
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created" << std::endl;
	return;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*

./account > 20201105_120032.log
diff <(cut -d ' ' -f2 19920104_091532.log) <(cut -d ' ' -f2 20201105_120032.log)

*/
