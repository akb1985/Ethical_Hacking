#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
int main()
{
char buff[15];
int pass = 0;
cout<<"\nEnter the password : "<<endl;
gets(buff);
if(strcmp(buff, "thegeekstuff"))
{
cout<<"\n Wrong Passsword!!";
}
else{
cout<<"\n Correct Password :)"<<endl;
}
if(pass){
cout<<"\nRoot privileges are provided to the the user"<<endl;
}
return 0;
}
