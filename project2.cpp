#include <iostream>
#include <cstring>

using namespace std;


int Count(char str1[], char str2[]){
    int len1=strlen(str1);
    int len2=strlen(str2);
    bool b = true; 
    int count=0;

    for(int i=0; i<=len1-len2; i++){
       
        if(i == 0 || str1[i - 1] == ' '){
             b=true;
            
            for(int j=0; j<len2; j++){
                if(str1[i + j] != str2[j]){
                    b=false;
                    break;
                }
        }
       
    if(b){
            count++;
        }
        }
     
        
    }
    return count;
}

int main(){
    char str1[50];
    cin.getline(str1,50);


    char str2[10];
    cin.getline(str2,10);

    cout<<Count(str1,str2);

    return 0;
}
