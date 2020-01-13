#include<stdio.h>

//YOUR CODE
//input:
// int[] data : array of data including previous data so far, with length of num_prev_data.
// num_prev_data : number of data above
int predict(int* data, int num_prev_data){
    //your new data should be data[num_prev_data-1];
    int value = data[num_prev_data-1];

    //output: 0 for black, 1 for gray and 2 for white.
    if(value > 300)return 2;
    if(value > 200)return 1;
    else return 0;
}



//////////////////////////////////////////////////////////
//////////////////DO NOT MODIFY BELOW/////////////////////
//////////////////////////////////////////////////////////
int main(void){
    float average_score = 0;
    for(int f=1; f <= 4; f++){
        char filename[10];
        sprintf(filename, "data%d.txt", f);
        FILE* fp = fopen(filename, "r");
        
        int N;
        fscanf(fp, "%d", &N);
        int data[N];
        int score = 0;
        for(int i=0; i < N; i++){
            int d, label;
            fscanf(fp, "%d %d", &d, &label);
            data[i] = d;
            int pred = predict(data, i+1);
            if(pred == label)score++;
        }
        printf("round %d: your score: %f\n",f, score / float(N));
        average_score += score/float(N);
        //score the prediction
        fclose(fp);
    }
    average_score /= 4;
    printf("average score: %f\n", average_score);
}