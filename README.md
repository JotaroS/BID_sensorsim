open in markdown viewer for more better view.

# BID light sensor classifier algorithm challenge

Jotaro, 2020/01/10

## Task

Your task is to complete `int predict(int [], int)` that predicts whether incoming data is black, gray or white.
In this function you can use: 
- array of obtained data so far, and its length

You must not edit any other lines in code except for above function.

## Sensor data

Each data values belongs to one of three classes:{ 0-black, 1-gray, 2-white}.
The data point follows three different Gaussian distribution with different mean and deviation unknown to each other.

## Format

You don't have to code the data reading procedure but the prepared code should do (tested with macOS Catalina clang environment).

```
N
d1 l1
d2 l2
...
dN lN
```

## Evaluation
Your code will be tested both with existing test data (data1.txt - data4.txt) and will also be tested our private test data.
The evaluation will be done by accuracy(%) (TODO: maybe I should use cross entropy).


## Example

```cpp
int predict(int* data, int num_prev_data){
    //your new data should be data[num_prev_data-1];
    int value = data[num_prev_data-1];

    //output: 0 for black, 1 for gray and 2 for white.
    if(value > 300)return 2;
    if(value > 200)return 1;
    else return 0;
}
```
