#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
vector<string> split(string target, string delimiter)
{
   vector<string>v;
   int sz=delimiter.length();
   char char_array[sz + 1];
   string str;
   strcpy(char_array, delimiter.c_str());
   for (int i=0;i<target.size();i++)
   {
       for (int j=0;j<sz;j++)
       {
           if (target[i]==char_array[j])
           {
               for (int j=0;j<i;j++)
               {

                   str.push_back(target[j]);
               }
           }
       }
   }

}









