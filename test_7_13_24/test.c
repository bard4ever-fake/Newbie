//#include <stdio.h>
//int main()
//{
//    if (3 == 5)
//    {
//        printf("Bingo!");
//    }
//    else
//    {
//        printf("Wrong ");
//        printf("as fuck");
//    }
//    return 0;
//}

//#include <stdio.h>
//int test()
//{
//    int a = 0;
//    if (a == 3)
//        return 100;
//    else
//        return 101;
//}
//int main()
//{
//    int b = test();
//    printf("%d", b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    scanf_s("%d", &a);
//        if (a % 2 == 1)
//        printf("odds");
//        else
//            printf("evens");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int age = 0;
//    printf("Please enter your age:\n");
//    scanf_s("%d", &age);
//    if (age < 18 && age > 0)
//        printf("Adolescent, alcohols not allowed");
//    else if (age >= 18)
//        printf("Adult, alcohols allowed");
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 1;
//    while (a <= 100)
//    {
//        printf("%d ", a);
//        a = a + 2;
//    }
//    return 0;
//}

//或者

//#include <stdio.h>
//int main()
//{
//    int a = 1;
//    while (a <= 100)
//    {
//        if (a % 2 == 1)
//            printf("%d ", a);
//        a++;
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    printf("Enter a number between 1-7\n");
//    scanf_s("%d", &day);
//    switch (day)
//    {
//    case 1:
//        printf("Monday\n");
//        break;
//    case 2:
//        printf("Tuesday\n");
//        break;
//    case 3:
//        printf("Wednesday\n");
//        break;
//    case 4:
//        printf("Thursday\n");
//        break;
//    case 5:
//        printf("Friday\n");
//        break;
//    case 6:
//        printf("Saturday\n");
//        break;
//    case 7:
//        printf("Sunday\n");
//        break;
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    printf("Enter a number between 1-7\n");
//    scanf_s("%d", &day);
//    switch (day)
//    {
//    case 1:
//    case 2:
//    case 3:
//    case 4:
//    case 5:
//        printf("Weekday\n");
//        break;
//    case 6:
//    case 7:
//        printf("Weekend\n");
//        break;
//    default:
//        printf("Error\n");
//        break;
//    }
//    return 0;
//}