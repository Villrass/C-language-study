#pragma once
#include<iostream>
using namespace std;
#include<string>
struct lianxi 
{
    string name;
    string sex;
    int age;
    int tele;
    string home;
    int pan;
};
void add(lianxi arr[], int len);
void printfcout(lianxi arr[], int len);
void dele(lianxi arr[], int len);
void fin(lianxi arr[], int len);
void exchange(lianxi arr[], int len);