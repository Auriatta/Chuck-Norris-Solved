#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
**/

void genresult(string result, string src, int index);


string DecToBin(int number)
{
    return std::bitset<7>(number).to_string();
}
string char_to_bin(string message)
{
    string binary = "";
    for(int i = 0;i<message.length();i++)
    {
        binary+=DecToBin(message[i]);
    }
    cerr<<binary<<endl;
    return binary;
}

string getType(char number)
{
    int type = number;
    type = 48/type; 
    type+=1;
    
    string result = "";
    for(int i=0;i<type;i++)
     result += "0";
    
    return result; 
}

int main()
{
    string MESSAGE = "1000011";
    getline(cin,MESSAGE);
    MESSAGE = char_to_bin(MESSAGE);
    
    genresult("",MESSAGE,0);
    
    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

}


void genresult(string result, string src, int index)
{
    if(index >= src.length())
    {
        
        cout<<result<<endl;
        exit(0);
    }
    
    if(result!="")    
        result += " ";
    
    char type = src[index];

   result += getType(src[index]) + " ";
   
    while(true)
    {
        if(src[index] != type)
            break;
        else
            result+="0";
            
        index+=1;
    }
    
    genresult(result, src, index);
}
