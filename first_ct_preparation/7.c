// Display the multiplication table of a given number.



int main(){

    int number;

    printf("Enter any number to disply its mutiplication table:");
    scanf("%d",&number);  


    for(int i=1; i<=10 ; i++){
        printf("%d X %d = %d \n", number, i, number*i);
        }
}