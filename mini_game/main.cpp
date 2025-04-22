#include <iostream>
#include <string>
#include <cstdio> //printf

using namespace std;

int main(){
    int score = 0;

    srand(time(0));// random number

    int random = rand() % 3 + 1;;
    char num;

    printf("Chose the door\n");
    printf("1\t 2\t 3\t\n");
    cin >> num;

    while (true) {
        printf("Chose the next door\n");
        printf("1\t 2\t 3\t\n");
        cin >> num;
    if(num == (random + '0')){
        printf("Nice you, go to next door!\n");
        score ++;
    }
    else{
        printf("Nop, try agian!\n");
        cout << "Your failan result: " << score <<endl;
        printf("Check your new file!");

        //save result to file
        FILE *file = fopen("score.txt", "w"); // open file writing
        if (file != NULL) {
        fprintf(file, "Your test result score: %d\n", score);
        fclose(file);//close file
    } else {
        printf("Error opening file!\n");
    }
        break;
    }
    }
    
    return 0;
}