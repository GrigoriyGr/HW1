#include <iostream>
//Variant 1
using namespace std;
int variant(string name, int var)
{
    int sum = 0;
    for (int i = 0; i < sizeof(name); i++)
        sum += name[i];
    return (sum % var) + 1;
}
int main()
{
    string name;
    int var;
    cout << "Student's name is: ";
    cin >> name;
    cout << "Amount of variants: ";
    cin >> var;
    cout << "Student's variant is: " << variant(name,var) << " ";
    return 0;
}
