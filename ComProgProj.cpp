#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
cout << "\n\n FINAL PROJECT OF ANGELICA, HANNAH AND STEVIEN \n\n\n";
cout << "===== Computer Programming - SALES COMPUTATION ===== \n\n";


        string passcode;
        string yes_no;
        string yesOrno;
        string ageUser;
        string product_class_letter;
        int product_class;
        int product_num;
        string product_num_string;
        double price = 0, total = 0, net_sales = 0, discount = 0;

            for (int i = 1; i <= 3; i++)
            {
                for (i = 1; i <= 3; i++)
                {
                    cout << "\n Enter Passcode: ";
                    cin >> passcode;

                    if (passcode == "1234") // start passcode
                    {
                    system("cls");
                    goto startMenu;// for start program in sales computation if ever the user input the right passcode
                    }

                }
            cout << "\nSorry, You have been blocked from using the system! \n\t" << endl;
             return 0;
            }


       startMenu:
        cout << "\n\t====Welcome to our SALES COMPUTATION System!====\n";
        cout <<"\n\nTo begin, please enter your details below: \n";
        cout <<"Are you a senior citizen? [Y/N] or [y/n]: ";
        cin >> ageUser;

            if (ageUser == "Y" || ageUser == "y")
            {
                goto startProductClass;
            }
            else if (ageUser == "N" || ageUser == "n")
            {
            goto startProductClass;
            }
            else
            {
                cout << "\nSorry, you may have entered an invalid input.";
                cout << "\nDo you wish to try again? [Y/N or y/n]: ";
                cin >> yes_no;
                if (yes_no == "Y" || yes_no == "y")
                {
                    system("cls");
                    goto startMenu;
                }
                else if (yes_no == "N" || yes_no == "n")
                {
                    cout << "\nThank you for using the program. Have a nice day!\n\n" << endl;
                }
                else
                {
                    cout << "\nSorry! You have entered the invalid input! Try again next time and have a blessed day!\n\n";
                }
            return 0;
            }


        startProductClass:
        cout << "\n===SELECT A PRODUCT CLASS FOR YOUR INVOICE===\n";
        cout << "\n\t[ A ] Product Class A\n";
        cout << "\n\t[ B ] Product Class B\n";

        cout << "\n";
        cout << "Enter preferred product class [A/B]: ";
        cin >> product_class_letter;

        if ((product_class_letter=="A"||product_class_letter=="a")){
            product_class=1;
            product_class_letter="A";
        }
        else if ((product_class_letter=="B"||product_class_letter=="b")){
            product_class=2;
            product_class_letter="B";
        }
        else{
            cout<<"\nSorry, you may have entered an invalid input.";
            cout<<"\nPlease Try Again\n";
            goto startProductClass;
        }
        switch (product_class)
        {
            case 1:
            {
                startProductNoA:
                cin.clear();
                cin.ignore(100, '\n');
                product_num=0;
                cout<<"\n";
                cout <<"======== PRODUCT CLASS A =========";
                cout<<"\n";
                cout<<" +--------------+--------------+"<<endl;
                cout<<" | Product No.  |  Price       |"<<endl;
                cout<<" +--------------+--------------+"<<endl;
                cout<<" | 100 - 110    |  120.00      |"<<endl;
                cout<<" +--------------+--------------+"<<endl;
                cout<<" | 120 - 130    |  150.00      |"<<endl;
                cout<<" +--------------+--------------+"<<endl;

             cout << "\nEnter Product No.: ";
            cin >> product_num;
                if ((product_num>=100)&&(product_num<=110))
                    {
                        price = 120.00;
                    }
                else if ((product_num>=120)&&(product_num<=150))
                    {
                        price = 150.00;
                    }
                else
                    {
                            cout << "\nSorry! You have entered the invalid input! Please Try Again!\n\n";
                            goto startProductNoA;
                    }
                break;
            }   

            case 2:
            {
               
                startProductNoB:
                cin.clear();
                cin.ignore(100, '\n');
                cout <<"\n";
                cout <<"======== PRODUCT CLASS B =========";
                cout <<"\n";
                cout <<" +--------------+--------------+"<<endl;
                cout <<" | Product No.  |  Price       |"<<endl;
                cout <<" +--------------+--------------+"<<endl;
                cout <<" | 220 - 230    |  100.00      |"<<endl;
                cout <<" +--------------+--------------+"<<endl;
                cout <<" | 240 - 250    |  170.00      |"<<endl;
                cout <<" +--------------+--------------+"<<endl;

                
                cout << "\nEnter Product No.: ";
                cin >> product_num;
                
                if ((product_num>=220)&&(product_num<=230))
                    {
                        price = 100.00;
                    }
                else if ((product_num>=240)&&(product_num<=250))
                    {
                        price = 170.00;
                    }
                else
                    {
                            cout << "\nSorry! You have entered the invalid input! Try again next time and have a blessed day!\n\n";
                            goto startProductNoB;
                    }
                break;
            }
            default:
            {
                cout<<"\nSorry, you may have entered it in a lowercase character or an invalid input.";
                cout<<"\nPlease Try Again\n";
                goto startProductClass;
                
            }
        }

        string ageUserDisplay, userDiscountDisplay;
        if (ageUser == "Y" || ageUser == "y"){
            discount = 0.2 * price;
            net_sales = price - discount;

            total=net_sales;
            ageUserDisplay="Yes ";
            userDiscountDisplay="20% ";
            
        }
         else if (ageUser == "N" || ageUser == "n")
            {

            total=price;
            net_sales=price;
            ageUserDisplay="No  ";
            userDiscountDisplay="None";
            
            }
        else {
            
        }
        
        
        cout<<"\n\n";  
        cout<<fixed;
        cout<<"+------------------------------------------+"<<endl;
        cout<<"|                 SUMMARY                  |"<<endl;
        cout<<"+------------------------------------------+"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        cout<<"| User is a senior citizen  |  "<<ageUserDisplay;cout<<"        |"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        cout<<"| Product Class             |  "<<product_class_letter<<"           |"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        cout<<"| Product No.               |  "<<product_num<<"         |"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        cout<<"|                                          |"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        cout<<"| Total Sales               |  "<<setprecision(2)<<price<<"      |"<<endl;
        cout<<"+------------------------------------------+"<<endl;
        cout<<"| Discount Available        |  "<<userDiscountDisplay;cout<<"        |"<<endl;
        cout<<"+------------------------------------------+"<<endl;
        cout<<"| Total Net Sales           |  ";if(net_sales<100){cout<<setprecision(3)<<net_sales;}else{cout<<setprecision(2)<<net_sales;} cout<<"      |"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        cout<<"|                                          |"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        cout<<"| TOTAL AMOUNT DUE          |  ";if(total<100){cout<<setprecision(3)<<total;}else{cout<<setprecision(2)<<total;} cout<<" PHP  |"<<endl;
        cout<<"+---------------------------+--------------+"<<endl;
        
        
        cout << "\nDo you wish to try again? [Y/N or y/n]: ";
        cin >> yes_no;

            if (yes_no == "Y" || yes_no == "y")
            {
                system("cls");
                goto startMenu;
            }
            else if (yes_no == "N" || yes_no == "n")
            {
                cout << "\nThank you for using the program. Have a nice day!\n\n" << endl;
                cout<<"\n\n";
            }
            else{
                cout<<"\nSorry! You have entered the invalid input! Try again next time and have a blessed day!\n\n";
                cout<<"\n\n";
            }

return 0;
}
