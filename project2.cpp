#include <iostream>
#include <cstring>

using namespace std;

int Count(char str1[], char str2[]){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int count = 0;

    for(int i = 0; i <= len1 - len2; i++){
        bool found = true;
        for(int j = 0; j < len2; j++){
            if(str1[i + j] != str2[j]){
                found = false;
                break;
            }
        }
        if(found){
            count++;
            i += len2 - 1; 
        }
    }

    return count;
}

int main(){
    char str1[30];
    cin.getline(str1, 30);
    char str2[10];
    cin.getline(str2, 10);

    cout << Count(str1, str2);

    return 0;
}
