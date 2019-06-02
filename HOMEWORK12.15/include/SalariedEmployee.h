
#include "Employee.h"

class SalariedEmployee : public Employee
{
public:
   SalariedEmployee( const string &, const string &, const string &, int, int, int, double = 0.0 );
   virtual ~SalariedEmployee(){}

   void setWeeklySalary( double );
   double getWeeklySalary() const;

   virtual double earnings() const;
   virtual void print() const;
private:
   double weeklySalary;
};


