#include<iostream>

int main(){
    int date,month,year;
    std::cout<<"Enter date month and year : ";
    std::cin>>date>>month>>year;
    if(month<1 || month>12 ){
        std::cout<<"Invalid Month.\n";
        return 0;
    }
    if(year<1){
        std::cout<<"Invalid year.\n";
        return 0;
    }
    int days;
    switch(month){
        case 1:
            days = 31;
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0){
                days = 29;
            }
            else{
                days = 28;
            }
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days=31;
            break;
        case 6:
            days=30;
            break;
        case 7:
            days=31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
    }
    if(date>days || date<1){
        std::cout<<"Invalid date.\n";
        return 0;
    }
    if((year % 4 == 0 && year % 100 != 0 )|| year % 400 == 0){
        std::cout<<"It is a leap year.\n";
    }
    else{
        std::cout<<"It is not a leap year.\n";
    }

    std::cout<<"Number of days in the month = "<<days<<'\n';
    if(month>6){
        std::cout<<"Second half.\n";
    }
    else{
        std::cout<<"First Half.\n";
    }

    return 0;
}