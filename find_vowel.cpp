#include<iostream.h>
using namespace std;

string vowel(string S){
    
    char ch = S[0]; //pick first character
    char vowelContais[100];
    int i =0; //as first characted is picked
    int j =0;
    while(ch != '\0') {
      switch(ch) {
          case 'a': 
          case 'e': 
          case 'i': 
          case 'o': 
          case 'u': 
             vowelContais[j]= ch;
             j++;
      }
      i++;
      ch = S[i];
   }
   
   vowelContais[j]='\0';

   return string(vowelContais);
    
} 
