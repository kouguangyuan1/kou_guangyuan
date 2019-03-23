#include <string>
using namespace std;

class GradeBook
{
public:
    GradeBook(string a,string b)
    {
        setCoursename( a );
        setTeachername( b );
    }
    void setCoursename(string a)
    {
        Coursename = a;
    }
    string getCoursename() const
    {
        return Coursename;
    }
    void setTeachername(string b)
    {
        Teachername = b;
    }
    string getTeachername() const
    {
        return Teachername;
    }
    void displaymessage()
    {
    cout << "Welcome to the Grade book for\n" << getCoursename() << "!" << "\nThis Course is presented by " << getTeachername() <<endl;
    }
    private:
    string Coursename;
    string Teachername;
};
