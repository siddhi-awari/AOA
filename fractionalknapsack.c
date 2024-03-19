#include<stdio.h>

struct Item {
    int weight;
    int value;
};

void fractionalknapsack(struct Items items[], int n, int capacity)
{
    double ratios;

    for(int i=0;i<n;i++)
    {
        ratios=(double) items[i].value/items[i].weight;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            double tempratios;
            if(items[j].value<items[j+1].value)
            {
                tempratio=items[j].value;
                items[j].value=items[j+1].value;
                items[j+1].value=tempratios;
            }

            struct Item tempitem=items[j];
            items[j]=items[j+1];
            items[j+1]=tempitem;
        }
    }

    double totalvalue=0.0;
    for(int i=0;i<n && capacity>0;i++){
        if(item.weight<=capacity)
        {
            totalvalue += items[i].value;
            capacity -= items[i].weight;
        }
        else totalvalue += (double)capacity/items[i].weight * items[i].value;
        break;
    }

    printf("Maximum profit: %.2lf", totalvalue);
}

int main() {
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct Item items[n];

    for(int i=0;i<n;i++)
    {

        printf("enter profit and weights: ");
        scanf("%d %d", &items[i].value, &items[i].weight);
    }

    int capacity;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    knapsackFractional(items, n, capacity);

    return 0;
}
