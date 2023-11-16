//#include <cstdio>
//int main(){
//
//int score;
//    printf(" Enter your score:  ");
//    scanf("%d", &score);
//
//char grade;
//    if(score >= 70){
//        grade = 'A';
//    } else if (score >= 60){
//        grade = 'B';
//    } else if (score >= 50){
//        grade = 'C';
//    } else if (score >= 40){
//        grade = 'D';
//    } else if (score >= 30){
//        grade = 'E';
//    } else {
//        grade = 'F';
//    }
//    printf("Grade for students :%c\n", grade);
//
//
//
//
//    return 0;
//
//}

#include <cstdio>
int main(){
    double marriage;
    double numChildren;
    printf("are you married with children ? (1 for yes 0 for no):");
    scanf("%lf", &marriage);
 double base_pay = 200;
 double totalpay;
 double commission = base_pay;
 double commissionrate;
 double gross_sales;
    printf("what is the gross sales : $");
    scanf("%lf", &gross_sales);
 if (gross_sales >= 10000){
     commissionrate = 0.09;
 } else if (gross_sales >= 5000 && gross_sales < 10000){
     commissionrate = 0.07;
 }
    if (marriage == 1) {
        printf("Enter the number of children: ");
        scanf("%lf", &numChildren);
        commissionrate += 0.01;
    }

    commission = gross_sales * commissionrate;
    totalpay = base_pay + commission;

    printf("\nCommission earned: $%lf\n", commission);
    printf("Total pay for the week: $%lf\n", totalpay);


    return 0;

}
