#include <iostream>

using namespace std;

struct SDate
{
    short Year;
    short Month;
    short Day;
};

bool IsDate1BeforeDate2(SDate Date1 , SDate Date2)
{

    return (Date1.Year < Date2.Year) ? true : ((Date1.Year == Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month == Date2.Month ? Date1.Day < Date2.Day : false)) : false);

}

short ReadDay()
{
    short Day;
    cout << "\n Please Enter a Day ?";
    cin >> Day;
    return Day;
}

short ReadMonth()
{
    short Month;
    cout << "\n Please Enter a Month ?";
    cin >> Month;
    return Month;
}

short ReadYear()
{
    short Year;
    cout << "\n Please Enter a Year ?";
    cin >> Year;
    return Year;
}

SDate ReadFullDate()
{
    SDate Date;

    Date.Day = ReadDay();
    Date.Month = ReadMonth();
    Date.Year = ReadYear();

    return Date;
}

int main()
{
    SDate Date1 = ReadFullDate();
    SDate Date2 = ReadFullDate();

    if(IsDate1BeforeDate2(Date1 , Date2))
        cout << "\n Yes, Date1 is Less Than Date2. ";
    else
        cout << "\n NO, Date1 is NOT Less Than Date2. ";


    cout << endl;

	return 0;
}