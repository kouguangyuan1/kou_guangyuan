#include <iostream>

using namespace std;

int main()
{
  int a = 0;int b = 0;int c = 0;int d = 0;int e = 0;int f =0;
  cout << " Enter five integers: ";
  cin >> a >> b >> c >> d >> e;
  if ( a > b )
  {
      f = a;
      a = b;
      b = f;
  }
  if ( b > c )
  {
      f = b;
      b = c;
      c = f;
  }
  if ( c > d )
  {
      f = c;
      c = d;
      d = f;
  }
  if ( d > e )
  {
      f = d;
      d = e;
      e = f;
  }
  if ( b > c )
  {
      f = b;
      b = c;
      c = f;
  }
  if ( b > d )
  {
      f = b;
      b = d;
      d = f;
  }
  if ( b > e )
  {
      f = b;
      b = e;
      e = f;
  }
  if ( c > d )
  {
      f = c;
      c = d;
      d = f;
  }
  if ( c > e )
  {
      f = c;
      c = e;
      e = f;
  }
  if ( d > e )
  {
      f = d;
      d = e;
      e = f;
  }
  cout << " The Max is " << e << endl;
  cout << " The smallest is " << a << endl;
  return 0;
}
