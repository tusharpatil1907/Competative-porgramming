
// c program
// #include <stdio.h>
// #include <string.h>
// #include <conio.h>
// int main()
// {
//     int i = 0, x = 0;
//     char a[1000], b[1000];
//     // clrscr();
//     while (gets(a), gets(b))
//     {
//         int asc[128], bsc[128];
//         char longest[1000] = "";
//         for (i = 'a'; i <= 'z'; ++i)
//             asc[i] = bsc[i] = 0;
//         for (i = 0; i < sizeof(a); ++i)
//             ++asc[a[i]];
//         for (i = 0; i < sizeof(b); ++i)
//             ++bsc[b[i]];
//         x = 0;
//         for (i = 'a'; i <= 'z'; ++i)
//         {
//             while (asc[i] > 0 && bsc[i] > 0)
//             {
//                 longest[x] = (char)i;
//                 x++;
//                 --asc[i];
//                 --bsc[i];
//             }
//         }
//         printf("%s\n", longest);
//     }
//     return (0);
// }




// c++ program


#include <algorithm>
#include <iostream>
#include <iterator>
#include <numeric>
#include <sstream>
#include <fstream>
#include <cassert>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <map>
#include <set>
using namespace std;


int main(){
    string a,b;
    
    while(getline (cin,a)){
          getline (cin,b);        
          int tamA=a.size();
          int tamB=b.size();
          sort(a.begin(), a.end());
          sort(b.begin(), b.end());
          if (a == b){
             cout << a << endl;
             continue;
          }
          string k="";
          for(int i=0, j=0;i<tamA && j<tamB;){
            if(a[i]==b[j]){
                     k+= a[i];
                     i++;
                     j++;
            }else{
                  while (a[i] < b[j]){
                        ++i;
                        if (i == tamA) break;
                  }
                  while (b[j] < a[i]){
                        ++j;
                        if (j == tamB) break;
                  }
            }
          }
          cout<<k<<endl; 
    }
  
 return 0;   
}