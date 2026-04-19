#include<stdio.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))

float fractionalKnapsack(float knapsackContents[], int capacity,int n);
void insertionSort(int n);

struct item{

    float profit;
    float quantity;
    float ratio;

}myItem[100];

int main(){
    int n;
    printf("Please enter the number of items: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Please enter the profit and quantity of item %d:",i+1);
        scanf("%f %f",&myItem[i].profit,&myItem[i].quantity);
        myItem[i].ratio=myItem[i].profit/myItem[i].quantity;
    }

    float capacity;
    printf("Please enter the knapsack capacity:");
    scanf("%f",&capacity);

    // let 𝐴[1 … 𝑤.𝑙𝑒𝑛𝑔𝑡ℎ] be an array initialized to 0
    float knapsackContents[100]={0};

    float totalProfit = fractionalKnapsack(knapsackContents, capacity, n);

    printf("%f",totalProfit);
    return 0;
}

// FRACTIONAL-KNAPSACK(W, w, v)
float fractionalKnapsack(float knapsackContents[], int capacity, int n){

    // 𝑉 = 0
    float totalProfit = 0;

    // sort items by decreasing order of 𝑣[ 𝑖 ]/𝑤[ 𝑖 ]
    insertionSort(n);

    // for 𝑖 = 1 to 𝑤.𝑙𝑒𝑛𝑔𝑡ℎ
    for(int i=0;i<n;i++){

        // if 𝑊 == 0
        if(capacity==0){

            // return (𝑉, 𝐴)
            return totalProfit;
        }

        // 𝑎 = min( w[ i ] , W)
        float a = min(myItem[i].quantity , capacity);

        // 𝑉 = 𝑉 + 𝑎 ( 𝑣[ 𝑖 ]/𝑤[ 𝑖 ] )
        totalProfit = totalProfit + a * myItem[i].ratio;

        // 𝑤[ 𝑖 ] = 𝑤[ 𝑖 ] − 𝑎
        myItem[i].quantity = myItem[i].quantity - a;

        // A[ 𝑖 ] = 𝐴[ 𝑖 ] + 𝑎
        knapsackContents[i] = knapsackContents[i] + a;

        // 𝑊 = 𝑊 − 𝑎
        capacity = capacity - a;
    }

    // return (𝑉, 𝐴)
    return totalProfit;
}

void insertionSort(int n){
    int i, j;
    struct item key;
    for (i = 1; i < n; i++)
    {
        key = myItem[i];
        j = i - 1;

        while (j >= 0 && myItem[j].ratio < key.ratio)
        {
            myItem[j + 1] = myItem[j];
            j = j - 1;
        }
        myItem[j + 1] = key;
    }
}


