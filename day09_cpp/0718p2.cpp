#include <iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    const vector<string> scores={"F","D","C","B","A","A++"};
    string lettergrade;
    int grade;
    while(cin>>grade)
    {
        lettergrade=grade==100?scores[5]:
            grade<60?scores[0]:
            grade%10<3?scores[(grade-50)/10]+'-':
            grade%10>7?scores[(grade-50)/10]+'+':scores[(grade-50)/10];
        cout<<lettergrade<<endl;
    }
    return 0;
}
