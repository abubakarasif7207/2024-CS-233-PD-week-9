#include<iostream>
using namespace std;
string input_str;
int length =0;
void calculate_length();
bool even_length();
main()
{
    cout<<"enter a string: ";
    cin>>input_str;
    calculate_length();
    if(even_length())
    {
        cout<<"true"<<endl;

    }
    else{
        cout<<"false"<<endl;
    }
}


void calculate_length()
{
    length =0;
    for(int i=0;input_str[i]!='\0';i++)
    {
        length++;
    }

}
bool even_length()
{
    return(length%2==0);
}
