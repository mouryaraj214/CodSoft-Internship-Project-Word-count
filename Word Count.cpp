#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int count_word(string s)
{
    int count = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == ' ')
        {
            count++;
        }
    }
    return count+1;

}

int main()
{
    string s ;
    cout<<"Enter the Sentence : "<<endl;
    getline(cin,s);
    cout<<"The number of Words in String is " << count_word(s);


    return 0;

}




