#include<iostream>
#include<string.h>

using namespace std;

class abc
{
    char s[20];
    public:
        void getdata()
        {
            cout<<"Enter String: ";
            cin>>s;
        }
        void display()
        {
            cout<<"Concatenated String: ";
            cout<<s;
        }
    friend abc operator + (abc,abc);
};

abc operator + (abc s1, abc s2)
{
    abc temp;
    strcpy(temp.s,s1.s);
    strcat(temp.s,s2.s);
    return temp;
}

int main()
{
    abc s1, s2, s3;
    s1.getdata();
    s2.getdata();
    s3=s1+s2;
    s3.display();
    return 0;
}
