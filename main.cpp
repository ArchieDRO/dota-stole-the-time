#include <iostream>
#define YEAR 365
#define HOURS 24

using namespace std;

int check_days (int hour)
{
    return hour / HOURS;
}

int check_year (int hour)
{
    return check_days(hour) / YEAR;
}

string print_year(int years)
{
    if (years >= 5 && years <= 20)
    {
        return " let ";
    }
    years = years % 10;
    if (years == 1)
    {
        return " god ";
    }
    else if (years > 1 and years <= 4)
    {
        return " goda ";
    }
    else {
        return " let ";
    }
}

string print_days(int days)
{
    if (days >= 5 && days <= 20)
    {
        return " dney ";
    }
    days = days % 10;
    if (days == 1)
    {
        return " den ";
    }
    else if (days > 1 and days <= 4)
    {
        return " dnya ";
    }
    else {
        return " dney ";
    }
}

string print_hour(int hour)
{
    if (hour >= 5 && hour <= 20)
    {
        return " chasov ";
    }
    hour = hour % 10;
    if (hour == 1)
    {
        return " chas ";
    }
    else {
        return " chasa ";
    }
}

void print (int year, int day, int hour)
{
    string text;
    if (year) {
        text = to_string(year) + print_year(year);
    }
    if (day) {
        text = text + to_string(day) + print_days(day);
    }
    if (hour) {
        text = text + to_string(hour) + print_hour(hour);
    }
    if (year == 0 && day == 0 && hour == 0)
    {
        text = "nihuya ";
    }
    cout << text << endl;
}

void check_dota_time(int hours) {
    int days = check_days(hours);
    int year = check_year(hours);
    int r_days = days - YEAR * year;
    int r_hours = hours - HOURS * days;

    cout << "ti proebal ";
    print(year,r_days,r_hours);
}

int main() {
    int hours;
    cout << "Welcome to the dota2 stolen time checker ";
    cin >> hours;
    check_dota_time(hours);

    return 0;
}
