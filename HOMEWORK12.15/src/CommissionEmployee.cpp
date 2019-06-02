#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"
using namespace std;

CommissionEmployee::CommissionEmployee( const string &first, const string &last, const string &ssn, int month, int day, int year,double sales, double rate )
   : Employee( first, last, ssn, month, day, year )
{
   setGrossSales( sales );
   setCommissionRate( rate );
}
void CommissionEmployee::setCommissionRate( double rate )
{
    if( rate > 0.0 && rate < 1.0)
        commissionRate = rate;
    else
        throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}
void CommissionEmployee::setGrossSales( double sales )
{
  if( sales >= 0.0 )
     grossSales = sales;
  else
    throw invalid_argument("Gross sales must be >= 0.0");
}
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
double CommissionEmployee::earnings() const
{
   return getCommissionRate() * getGrossSales();
}
void CommissionEmployee::print() const
{
   cout << "commission employee: ";
   Employee::print();
   cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
}