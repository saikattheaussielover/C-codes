#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    char name[20];

    cout << "Enter your name here: " << endl;

    gets(name);

    cout << "Welcome " << name << endl;

    getch();
}