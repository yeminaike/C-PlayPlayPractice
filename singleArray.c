// int main(){

// int score [] = {10, 20, 30, 40, 50};

// printf("%d", score[0]);

// return 0;
// }

#include <stdio.h>
// int main()
// {

//     float scores[] = {10, 20, 30, 40, 50};

//     float totalScore = 0;
//     float average;

//     int length = sizeof(scores) / sizeof(scores[0]);

//      int index;                                

//     for (index = 0; index < length; index++)
//     {

//         totalScore = totalScore + scores[index];
      
//     }

//       average = totalScore /length;

//     printf("%f", totalScore);
//     printf("%f", average);
//     return 0;
// }




// #include <stdio.h>
// int main()
// {

//     float scores[] = {10, 20, 30, 40, 50};

//     float totalScore = 0;
//     float average;
//     float counter;

//     // int length = sizeof(scores) / sizeof(scores[0]);

//      int index;                                

//     for (index = 0; index < 5; index++)
//     {

//         totalScore = totalScore + scores[index];

//         counter++;
//           average = totalScore /5;
      
//     }

    

//     printf("%f", totalScore);
//     printf("%f", average);
//     return 0;
// }



#include <stdio.h>
// int main() {


// float scores [] = {10, 5, 30, 15, 50};

// // Initialize maxScore with the first element of the array

// int index;

// float maxScore = scores[0];


// for (index = 0; index <= 4; index++) {
//     if (scores[index] > maxScore) {
//         maxScore = scores[index];
//     }
// }

// printf("%f", maxScore);
// return 0;

// }

int main(){

float scores [] = {10, 20, 30, 40, 50};


int index;

float maxScore = scores[0];

for(index = 0; index <=4; index++){

    if(scores[index] > maxScore){
        maxScore = scores[index];
    }
}

printf("f", maxScore);
return 0;

}

