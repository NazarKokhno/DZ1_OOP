#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
// classwork
class Rectangle__ {
//private:
    double length = 1;
    double width = 1;
    bool kl = false;

public:
    Rectangle__(bool kl) : kl(kl),length(2), width(2) {};

    Rectangle__(bool kl,double l, double w=2) :kl(kl),length(l), width(w)
    {
    }
    double GetLength()
    {
        if (kl) return length;
        else
        {
            cout << "Access denied" << endl;
            return -1;
        }
        return length;
    }
    
    double GetWidth()
    {
        return width;
    }

    
    double area() {
    return length * width;
}

};

//In - class task
class Point
{
private:
    int x;
    int y;
    int z;

public:

    Point() { x = 0, y = 0, z = 0; };

    Point(int x1, int y1, int z1)
    {
        x = x1;
        y = y1;
        z = z1;
    }

    void inputPoint()
    {
        cout << "X: ";
        cin >> x;
        cout << "Y: ";
        cin >> y;
        cout << "Z: ";
        cin >> z;
    }

    void outputPoint()
    {
        cout << "X: " << x << endl;
        cout << "Y: " << y << endl;
        cout << "Z: " << z << endl;
    }

};

//DZ
class Student
{
private:
    string FullName;
    string DateOfBirth;
    string Contact;
    string City;
    string Country;
    string EduInstitution;
    int GroupNum;

    bool canGet = false;
    bool canSet = false;
  
public:
    
    Student(bool canSet1,bool canGet1) : FullName("No info"), DateOfBirth("No info"), Contact("+XXXXXXXXXX"),
        City("No info"), Country("No info"), EduInstitution("No info"), GroupNum(0),canGet(canGet1), canSet(canSet1){}
    
    Student(bool canSet1, bool canGet1,string FullName1, string DateOfBirth1, string Contact1,
        string City1, string Country1, string EduInstitution1, int GroupNum1)
        : FullName(FullName1), DateOfBirth(DateOfBirth1), Contact(Contact1),
        City(City1), Country(Country1),
        EduInstitution(EduInstitution1), GroupNum(GroupNum1), canGet(canGet1), canSet(canSet1) {}

    string GetFullName()
    {
        if (canGet) return FullName;
        else
        {
            cout << "Access denied" << endl;
            return "";
        }

    }
    string GetDateOfBirth()
    {
        if (canGet) return DateOfBirth;
        else
        {
            cout << "Access denied" << endl;
            return "";
        }

    }
    string GetContact()
    {
        if (canGet) return Contact;
        else
        {
            cout << "Access denied" << endl;
            return "";
        }

    }
    string GetCity()
    {
        if (canGet) return City;
        else
        {
            cout << "Access denied" << endl;
            return "";
        }

    }
    string GetCountry()
    {
        if (canGet) return Country;
        else
        {
            cout << "Access denied" << endl;
            return "";
        }

    }
    string GetEduInstitution()
    {
        if (canGet) return  EduInstitution;
        else
        {
            cout << "Access denied" << endl;
            return "";
        }

    }
    int GetGroupNum()
    {
        if (canGet) return GroupNum;
        else
        {
            cout << "Access denied" << endl;
            return -1;
        }

    }

    void SetFullName(string name)
    {
        if (canSet) FullName = name;
        else
        {
            cout << "Access denied" << endl;
        }
    }
    void SetDateOfBirth(string date)
    {
        if (canSet) DateOfBirth = date;
        else
        {
            cout << "Access denied" << endl;
        }
    }
    void SetContact(string contact)
    {
        if (canSet) Contact = contact;
        else
        {
            cout << "Access denied" << endl;
        }
    }
    void SetCity(string city)
    {
        if (canSet) City = city;
        else
        {
            cout << "Access denied" << endl;
        }
    }
    void SetCountry(string country)
    {
        if (canSet) Country = country;
        else
        {
            cout << "Access denied" << endl;
        }
    }
    void SetEduInstitution(string inst)
    {
        if (canSet) EduInstitution = inst;
        else
        {
            cout << "Access denied" << endl;
        }
    }
    void SetGroupNum(int num)
    {
        
        if (canSet) GroupNum = num;
        
        else
        {
            cout << "Access denied" << endl;
            return;
        }
    }

    void InputInfo()
    {
        if (!canSet)
        {
            cout << "Access denied" << endl;
            return;
        }
        
        cout << "FullName: ";
        getline(cin >> ws, FullName);

        cout << "DateOfBirth: ";
        getline(cin, DateOfBirth);

        cout << "Contact: ";
        getline(cin, Contact);

        cout << "City: ";
        getline(cin, City);

        cout << "Country: ";
        getline(cin, Country);

        cout << "Educational institution: ";
        getline(cin, EduInstitution);

        cout << "GroupNum: ";
        cin >> GroupNum;
    }
    void OutputInfo()
    {
        if (!canGet)
        {
            cout << "Access denied" << endl;
            return;
        }

        cout << "FullName: ";
        cout << FullName << endl;

        cout << "DateOfBirth: ";
        cout << DateOfBirth << endl;

        cout << "Contact: ";
        cout << Contact << endl;

        cout << "City: ";
        cout << City << endl;

        cout << "Country: ";
        cout << Country << endl;

        cout << "Educational institution: ";
        cout << EduInstitution << endl;

        cout << "GroupNum: ";
        cout << GroupNum << endl;

    }

};


int main() 
{
   
    Student s{true,true};
    s.InputInfo();

    return 0;
}

