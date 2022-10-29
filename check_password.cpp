#include<iostream>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>

#define EOLN '\n'
void safe_gets(char *input, int max_chars)
{
if ((input == NULL) || (max_chars < 1)) return;
if (max_chars == 1) { input[0] = 0; return; }
int count = 0;
char next_char;
do {
next_char = getchar();
if (next_char != EOLN)
input[count++] = next_char;
} while ((count < max_chars-1) && (next_char != EOLN));
input[count]=0;
}

int main()
{
char buff[15];
int pass = 0;
cout<<"\nEnter the password : "<<endl;
safe_gets(buff);
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
