#include "string"
#include "iostream"
#include <cstdlib> // Needed to use random numbers
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;
//Functions worked on by Gabriel, Zeel, and Sarang
//Main body (calling functions) worked on by Gabriel and Dom
//For loop displayed in text file for 'No' for "Do you want to buy a car?" done by Dom and Gabriel
//Code cleanliness and management done by Sarang, Zeel
//Proof-read by G.Jacela, D. Ibanez, S. Khapra, Z. Soni
//===================================================================================================================================================================================================//     
//---------------------------------------------------------------------------------------------Functions---------------------------------------------------------------------------------------------//
//===================================================================================================================================================================================================//     
void intro() //Function for the introduction
{
    system ("cls");
    cout << "\n============================================" << endl;
    cout << "|Welcome to the car dealership, Me&TheBoys!|" << endl;
    cout << "============================================" << endl;
}
int budget()
{ //function to get and return the budget
    int budget=0;
        cout << "\n";
        cout << "What is your budget?" << endl;
        cin >> budget;
        cout << "\n";
        
    return budget;
}


int ColorChoice2; //Fuction for the exterior color of the car
string CarColor(string CarColor3)
{
    cout << "\n=======" << endl;
    cout << "|Color|" << endl;
    cout << "=======" << endl;
    do{
    cout << "\nSelect a paintjob you would like for $1000?" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "1: Black" << endl;
    cout << "2: Silver" << endl;
    cout << "3: White" << endl;
    cout << "4: Red" << endl;
    cout << "5: Blue" << endl;
   cin >> ColorChoice2;
   } while (ColorChoice2 > 5);
   if(ColorChoice2 == 1){
       CarColor3 = "Black";
    cout << "\nYour car is now Black" << endl;
    }else if(ColorChoice2 == 2){
    cout << "\nYour car is now Silver" << endl;
    }else if(ColorChoice2 == 3){
    cout << "\nYour car is now White" << endl;
    }else if(ColorChoice2 == 4){
    cout << "\nYour car is now Red" << endl;
    }else if(ColorChoice2 == 5){
    cout << "\nYour car is now Blue" << endl;
    }
    return CarColor3;
}


string IntColor2(string IntColor3) //Fuction for the interior color of the car
{
    do{
    cout << "\nSelect a Interior color you would like for free!" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "1: Black" << endl;
    cout << "2: White" << endl;
    cout << "3: Brown" << endl;
   cin >> ColorChoice2;
   } while (ColorChoice2 > 3);
   if(ColorChoice2 == 1){
       IntColor3 = "Black";
    cout << "\nYour car interior is now Black" << endl;
    }else if(ColorChoice2 == 2){
    cout << "\nYour car interior is now White" << endl;
    }else if(ColorChoice2 == 3){
    cout << "\nYour car interior is now Brown" << endl;
    }
    return IntColor3;
}

void TempSeats() //functions for Temp seat questions to save time from writing it multiple times in Accessory function
{
    cout << "\nWould you like to add Temperature controlled seats to your car for $5000?" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    cout << "1: Yes" << endl;
    cout << "2: No" << endl;
}

void Sound()//functions for Sound questions to save time from writing it multiple times in Accessory function
{
    cout << "\nWould you like Me&TheBoys sound system for a low price of $1000?" << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "1: Yes" << endl;
    cout << "2: No" << endl;
}
void Rims()//functions for Rim questions to save time from writing it multiple times in Accessory function
{
    cout << "\nWould you like to custom alloy rims for $800?" << endl;
    cout << "---------------------------------------------" << endl;
    cout << "1: Yes" << endl;
    cout << "2: No" << endl;
}



int Accessory(float totalPrice2){ //function for all the accessories
int choice1;
int choice2;
int choice3;
int choice4;
int AccessoryTotal; //This number is for the customer to know how much they spent on the accessory

AccessoryTotal = 0;
    cout << "\n=============" << endl;
    cout << "|Accessories|" << endl;
    cout << "=============" << endl;
    do{
    cout << "\nWould you like leather seats for $1000?" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1: Yes" << endl;
    cout << "2: No" << endl;
    cin >> choice1;
    }while (choice1 > 2);
        if(choice1 == 1){
            cout << "\nYou added Leather Seats to your Car" << endl;
            totalPrice2 = totalPrice2 + 1000; //adding price of 'leather seats' to total
            AccessoryTotal = 0 + 1000;
                do{
                TempSeats();
                cin >> choice2;
                } while (choice2 > 2);
                if(choice2 == 1){
                    cout << "\nYou added Temperature Controlled Seats to your car" << endl;
                    totalPrice2 = totalPrice2 + 5000; //adding price of 'Temp seats' to total
                    AccessoryTotal = AccessoryTotal + 5000;
                        do{
                        Sound();
                        cin >> choice3;
                        } while (choice3 > 2);
                        if(choice3 == 1){
                            cout << "\nYou added the Me&TheBoys sound system to your car" << endl;
                            totalPrice2 = totalPrice2 + 1000; //adding price of 'Me&TheBoys price to total
                            AccessoryTotal = AccessoryTotal + 1000;
                                do{
                                Rims();
                                cin >> choice4;
                                } while (choice4 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800; //adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800;
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }

                        }else if(choice3 ==2){
                            cout << "\nYou did not get the Me&TheBoys sound system" << endl;
                            totalPrice2 = totalPrice2 + 0; //IF the user didnt take the sound system
                            AccessoryTotal = AccessoryTotal + 0;
                            do{
                            Rims();
                                cin >> choice4;
                                } while (choice2 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800;//adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800; 
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }
                        }
                
                
                
                } else if(choice2 == 2){
                    cout << "\nYou did not take the Temp controlled seat option" << endl;
                    totalPrice2 = totalPrice2 + 0; //IF the user didnt take the temp seats
                    do{
                    Sound();
                        cin >> choice3;
                    } while (choice3 > 2);
                        if(choice3 == 1){
                            cout << "\nYou added the Me&TheBoys sound system to your car" << endl;
                            totalPrice2 = totalPrice2 + 1000; //adding price of 'Me&TheBoys price to total
                            AccessoryTotal = AccessoryTotal + 1000;
                            do{
                            Rims();
                                cin >> choice4;
                            } while (choice4 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800; //adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800;
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }
                        }else if(choice3 ==2){
                            cout << "\nYou did not get the Me&TheBoys sound system" << endl;
                            totalPrice2 = totalPrice2 + 0; //IF the user didnt take the sound system
                            AccessoryTotal = AccessoryTotal + 0;
                            do{
                            Rims();
                                cin >> choice4;
                            } while (choice4 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800; //adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800;
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }
                        }
                }
        cout << "\nYour Total amount for accessory is now $" << AccessoryTotal << endl;
        }else if(choice1 ==2){
            cout << "\nYou did not take the leather seat option" << endl;
            totalPrice2 = totalPrice2 + 0;//IF the user didnt take the leather seats
            AccessoryTotal = AccessoryTotal + 0; 
            do{
            TempSeats();
                cin >> choice2;
            } while (choice2 > 2);
                if(choice2 == 1){
                    cout << "\nYou added Temperature Controlled Seats to your car" << endl;
                    totalPrice2 = totalPrice2 + 5000; //adding price of 'Temp seats' price to total
                    AccessoryTotal = AccessoryTotal + 5000;
                    do{
                    Sound();
                        cin >> choice3;
                    } while (choice3 > 2);
                        if(choice3 == 1){
                            cout << "\nYou added the Me&TheBoys sound system to your car" << endl;
                            totalPrice2 = totalPrice2 + 1000; //adding price of 'Me&TheBoys' price to total
                            AccessoryTotal = AccessoryTotal + 1000;
                            do{
                            Rims();
                                cin >> choice4;
                            } while (choice4 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800; //adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800;
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }
                        }else if(choice3 ==2){
                            cout << "\nYou did not get the Me&TheBoys sound system" << endl;
                            totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                            AccessoryTotal = AccessoryTotal + 0;
                            do{
                            Rims();
                                cin >> choice4;
                            } while (choice4 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800; //adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800;
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }
                        }
                    //cout << "\nYour Total amount is now $" << totalPrice2 << endl;
                } else if(choice2 == 2){
                    cout << "\nYou did not take the Temp controlled seat option" << endl;
                    totalPrice2 = totalPrice2 + 0; //IF the user didnt take the temp seats
                    AccessoryTotal = AccessoryTotal + 0;
                    do{
                    Sound();
                        cin >> choice3;
                    } while (choice3 > 2);
                        if(choice3 == 1){
                            cout << "\nYou added the Me&TheBoys sound system to your car" << endl;
                            totalPrice2 = totalPrice2 + 1000; //adding price of 'Me&TheBoys' price to total
                            AccessoryTotal = AccessoryTotal + 1000;
                            do{
                            Rims();
                                cin >> choice4;
                            } while (choice4 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800; //adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800;
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }
                        }else if(choice3 ==2){
                            cout << "\nYou did not get the Me&TheBoys sound system" << endl;
                            totalPrice2 = totalPrice2 + 0;
                            AccessoryTotal = AccessoryTotal + 0;
                            do{
                            Rims();
                                cin >> choice4;
                            } while (choice4 > 2);
                                    if(choice4 == 1){
                                        cout << "\nYou changed your Rims to Custom alloy rims" << endl;
                                        totalPrice2 = totalPrice2 + 800; //adding price of 'Alloy Rims' price to total
                                        AccessoryTotal = AccessoryTotal + 800; 
                                    } else if(choice4 == 2){
                                        cout << "\nYou kept the original rims" << endl;
                                        totalPrice2 = totalPrice2 + 0; //IF the user didnt take the alloy rims
                                        AccessoryTotal = AccessoryTotal + 0;
                                    }
                        }
                }
        cout << "\nYour Total amount for accessory is now $" << AccessoryTotal << endl;
        }
    return totalPrice2;
}


float WarrantyCal(float totalprice2){ //function for the warranty
cout << fixed << setprecision(2); //make the calculations 2 decimal places
float Warranty0;
int choice1;
    cout << "\n=======================" << endl;
    cout << "|Warranty and Payement|" << endl;
    cout << "=======================" << endl;
    do{
    cout << "\nWould you like to add a 3-year warranty paid yearly?" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "1: Yes" << endl;
    cout << "2: No" << endl;
    cin >> choice1;
    } while (choice1 > 2);

    if(choice1 == 1){
        Warranty0 = totalprice2 * 0.05; //Calculates the Warranty by 5% of total
        cout << "\nYour yearly due for the warranty is $" << Warranty0 << endl;
    } else if(choice1 == 2){
        cout << "\nYou did not get the warranty" << endl;
    }
return Warranty0;
}


float FinanceCal(float totalprice2){ //Function for the finance
    int choice1;
    int choice2;
    float interest;
    float totalInterest;
    float Finance0;
    do{
    cout << "\nWould you like to finance your car?" << endl;
    cout << "-----------------------------------" << endl;
    cout << "1: Yes" << endl;
    cout << "2: No" << endl;
    cin >> choice1;
    } while (choice1 > 2);
        if(choice1 == 1){
            do{
            cout << "\nWould you like to make payments for 48 or 60 months?" << endl;
            cout << "----------------------------------------------------" << endl;
            cout << "1: 48 months with 5% interest" << endl;
            cout << "2: 60 months with 6% interest" << endl;
            cin >> choice2;
            } while (choice2 > 2);
            if(choice2 == 1){
            
                interest = totalprice2 * 0.05; //Calculating the 5% interest
                totalInterest = interest + totalprice2; //adds Interest to the total price
                Finance0 = totalInterest / 48; // divided the totalprice + interests by 48 months
                
                cout << "\nYou will now pay $" << Finance0 << " a month for 48 months" << endl;
            } else if(choice2 == 2){
                interest = totalprice2 * 0.06; //Calculating the 6% interest
                totalInterest = interest + totalprice2; //adds Interest to the total price
                Finance0 = totalInterest / 60; // divided the totalprice + interests by 60 months
                
                cout << "\nYou will now pay $" << Finance0 << " a month for 60 months" << endl;
            }
        }else if(choice1 == 2){
            do{
            cout << "\nHow would you like to make pay?" << endl;
            cout << "-------------------------------" << endl;
            cout << "1: Cash" << endl;
            cout << "2: Debit" << endl;
            cin >> choice2; //User selects Cash when they dont want to Finance
            } while (choice2 > 1);
            if(choice2 == 1){
                cout << "\nYou are now paying $" << totalprice2 << " in Cash" << endl;
            }
        }
        return Finance0;
}



int UsedCar(float totalprice2){ //Function for 'Used Car' 
    int choice1;
    do{
    cout << "\nWould you like a New version or a Used Version" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1: Used" << endl;
    cout << "2: New" << endl;
    cin >> choice1;
    }while (choice1 > 2);

    if(choice1 == 1){ 
    totalprice2 = totalprice2 - 10000; //$10000 off all cars when its used 
    cout << "\nYou now picked a used version of the car, and you total price is now $" << totalprice2 << endl;
   
    }else if(choice1 == 2){
        totalprice2 = totalprice2 - 0;
        cout << "\nYou now picked a New version of the car, your total price is still $" << totalprice2 << endl;
    }
    return totalprice2;
    }




 void model()
 { //function to display the output asking what model user wants
    cout << "\nWhat model you want to buy?" << endl;
    cout << "---------------------------" << endl;
}
 
//===================================================================================================================================================================================================//     
//---------------------------------------------------------------------------------------------Main Body---------------------------------------------------------------------------------------------//
//===================================================================================================================================================================================================//     
int main()
{
    // declaring the intergers
    int totalPrice;
    int answer2;
    int answer;
    int answer3;
    int answer4;
    int carChoice;
    string CarColor3;
    string IntColor3;

    system("color A"); //Change system color to light green
    
    
    intro(); //asking the user the first question of wanting to buy car
        do{
        
        cout << "\n\nDo you want to buy a car?" << endl;
        cout << "-------------------------" << endl;
        cout << "1: Yes" << endl;
        cout << "2: No" << endl;
        cin >> answer;
        } while (answer > 2);
        if(answer == 1) // if statement on depending on the users first answer
        {
            //Now asking the user on which car type
            do{
                cout << "\n";
                cout << "What type of a car you want to buy?\n";
                cout << "-----------------------------------" << endl;
                cout << "1: Coupe" << endl;
                cout << "2: Sedan" << endl;
                cout << "3: SUV" << endl;
                cin >> answer2;
            } while (answer2 > 3);
//=================================================================================================================================================================================================//                 
//----------------------------------------------------------------------------------------------Coupes---------------------------------------------------------------------------------------------// 
//=================================================================================================================================================================================================//                 
            if(answer2 == 1) //coding for the Coupes
            {
                int retBud = budget(); //getting the returned value of "budget"
                    cout << "Your budget is: $" << retBud << endl;
                    cout << "\n";
                        if(retBud < 49999){ //if the users budget is below $49999, displays the 3 car brands below
                            do{
                            cout << "What brand do you want?" << endl;
                            cout << "-----------------------" << endl;
                            cout << "1: Audi" << endl;
                            cout << "2: Mazda" << endl;
                            cout << "3: Honda" << endl;
                                cin >> answer3; //getting the users input for desired brands
                            } while (answer3 > 3);
                                switch (answer3) { //switch and case statements, 1 case for each brand, and 2 car types for each brand
                                    case 1: (answer3 == 1); //Case for Audi
                                    do{
                                    model();
                                        cout << "1: Audi A5 2.0T Premium Quattro - $45 985" << endl;
                                        cout << "2: Audi TT - $49 790" << endl;
                                        cin >> carChoice; //User picks Car model
                                    } while (carChoice > 2);
                                                cout << "\n";
                                                if(carChoice == 1){
                                                    cout << "You selected the Audi A5 2.0T Premium Quattro" << endl;
                                                    totalPrice = 0 + 45985;
                                                    totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors

                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl;
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Audi a5 2.0T Premium for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                                    
                                                } else if(carChoice ==2){
                                                    cout << "You selected the Audi TT" << endl;
                                                    totalPrice = 0 + 49790;
                                                    totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Audi TT for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                                    
                                                }
                                    break;
                                    case 2: (answer3 == 2); //Case for Mazda
                                    do{
                                    model();
                                        cout << "1: Mazda MX-5 Miata RF Club - $34 140" << endl;
                                        cout << "2: Mazda MX-5 Miata Grand Touring - $33 625" << endl;
                                        cin >> carChoice; //User pick Car model
                                    } while (carChoice > 2);
                                            cout << "\n";
                                            if(carChoice == 1){
                                                cout << "You selected the Mazda MX-5 Miata RF Club" << endl;
                                                totalPrice = 0 + 34140;
                                                totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Mazda MX-5 Miata RF Club for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                                
                                            } else if(carChoice == 2){
                                                cout << "You selected the Mazda MX-5 Miata Grand Touring" << endl;
                                                totalPrice = 0 + 33625;
                                                totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Mazda MX-5 Miata Grand Touring for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            }
                                    break;
                                    case 3: (answer3 == 3); // Case for Honda
                                    do{
                                    model();
                                        cout << "1: Honda Civic Lx - $21 545" << endl;
                                        cout << "2: Honda Civic Si Base - $25 930" << endl;
                                        cin >> carChoice; //User picks Car model
                                    } while (carChoice > 2);
                                            cout << "\n";
                                            if(carChoice == 1){
                                                cout << "You selected the Honda Civic Lx" << endl;
                                                totalPrice = 0 + 21545;
                                                totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Honda Civic Lx for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            } else if(carChoice == 2){
                                                cout << "You selected the Honda Civic Si Base" << endl;
                                                totalPrice = 0 + 25930;
                                                totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Honda Civic Si Base for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            }   
                                    break;
                                }       
                        
                        } else if(retBud >= 50000){ //if the users budget is above $50000, displays the 3 car brands below
                            do{
                                cout << "What brand do you want?"<< endl;
                                cout << "-----------------------" << endl;
                                cout << "1: Chevrolet" << endl;
                                cout << "2: Ford" << endl;
                                cout << "3: BMW" << endl;
                                cin >> answer4;//getting the users input for desired brands
                            } while (answer4 > 3);
                                

                                switch (answer4){ //switch and case statements, 1 case for each brand, and 2 car types for each brand
                                    case 1:(answer4 == 1);// Case for Chevrolet
                                    do{
                                    model();
                                        cout << "1: Chevrolet Camaro ZL1 - $67 410" << endl;
                                        cout << "2: Chevrolet Corvette Grand Sport - $92 310" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                           cout << "\n";
                                           if(carChoice == 1){
                                               cout << "You selected the Chevrolet Camaro ZL1" << endl;
                                               totalPrice = 0 + 67410;
                                               totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Chevrolet Camaro ZL1 for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                           } else if(carChoice == 2){
                                               totalPrice = 0 + 92310;
                                               cout << "You selected the Chevrolet Corvette Grand Sport" << endl;
                                               totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Chevrolet Corvette Grand Sport for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                           }
                                    break;
                                    case 2:(answer4 == 2); //Case for Ford
                                    do{
                                    model();
                                        cout << "1: Ford Mustang GT 350 - $64 525" << endl;
                                        cout << "2: Ford Shelby GT 350 - $87 425" << endl;
                                        cin >> carChoice; //User picks car model
                                    } while (carChoice > 2);
                                            cout << "\n";
                                            if(carChoice == 1){
                                                cout << "You selected the Ford Mustang GT 350" << endl;
                                                totalPrice = 0 + 64525;
                                                totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Ford Mustang GT 350 for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            } else if(carChoice == 2){
                                                cout << "You selected the Ford Shelby GT 350" << endl;
                                                totalPrice = 0 + 87425;
                                                totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Ford Shelby GT 350 for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            }
                                    break;
                                    case 3:(answer4 ==3); //Case for BMW
                                    do{
                                    model();
                                        cout << "1: BMW 440 iDrive - $60 330" << endl;
                                        cout << "2: BMW - M2 Competition - $62 470" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        
                                            cout << "\n"; 
                                            if(carChoice == 1){
                                            cout << "You selected the BMW 440 iDrive" << endl;
                                            totalPrice = 0 + 60330;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the BMW 440 iDrive for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            } else if(carChoice == 2){
                                            cout << "You selected the BMW - M2 Competition" << endl;
                                            totalPrice = 0 + 62470;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the BMW - M2 Competition for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            }
                                    break;

                                }

                        }  
             }
//================================================================================================================================================================================================//                  
//---------------------------------------------------------------------------------------------Sedans---------------------------------------------------------------------------------------------//
//================================================================================================================================================================================================//     
           
            if(answer2 == 2) //coding for the Sedans
            {
                int retBud = budget(); //getting the returned value of "budget"
                cout << "Your budget is: $" << retBud << endl;
                    cout << "\n";
                
                        if(retBud < 49999){ //if the users budget is below $49999, displays the 3 car brands below
                            do{
                                cout << "What brand do you want?"<< endl;
                                cout << "-----------------------" << endl;
                                cout << "1: Chrysler" << endl;
                                cout << "2: Nissan" << endl;
                                cout << "3: Toyota" << endl;
                                cin >> answer3; //getting the users input for desired brands
                            } while (answer3 > 3);

                                switch(answer3) { //switch and case statements, 1 case for each brand, and 2 car types for each brand
                                    case 1:(answer3 == 1 );//Case for Chrysler
                                    do{
                                    model();
                                        cout << "1: Chrysler Touring - $35 105" << endl;
                                        cout << "2: Chrysler 200 Limited - $26 955" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n"; 
                                        if(carChoice == 1){ 
                                            cout << "You selected the Chrysler Touring" << endl;
                                            totalPrice = 0 + 35105;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Chrysler Touring for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                            
                                        } else if(carChoice == 2){
                                            cout << "You seleted the Chrysler 200 Limited" << endl;
                                            totalPrice = 0 + 26955;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Chrysler 200 Limited for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 2:(answer3 == 2); //Case for Nissan
                                    do{
                                        model();
                                        cout << "1: Nissan Sentra SR - $21 795" << endl;
                                        cout << "2: Nissan Altima 25 SR - $27 935" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Nissan Sentra SR - $21 795" << endl;
                                            totalPrice = 0 + 21795;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Nissan Sentra SR for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Nissan Altima 25 SR" << endl;
                                            totalPrice = 0 + 27935;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Nissan Altima 25 SR for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 3:(answer3 == 3); //Case for Toyota
                                    do{
                                    model();
                                    cout << "1: Toyota Camry LE - $26 479" << endl;
                                    cout << "2: Toyota Corolla LE - $23 129" << endl;
                                    cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Toyota Camry LE" << endl;
                                            totalPrice = 0 + 26479;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Toyota Camry LER for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Toyota Corolla LE" << endl;
                                            totalPrice = 0 + 23129;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Toyota Corolla LE for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                }
                                

                        } else if(retBud >= 50000){ //if the users budget is above $50000, displays the 3 car brands below
                            do{
                                cout << "What brand do you want?"<< endl;
                                cout << "-----------------------" << endl;
                                cout << "1: Mercedez-Benz" << endl;
                                cout << "2: Tesla" << endl;
                                cout << "3: Genesis" << endl;
                                cin >> answer4; //getting the users input for desired brands
                            } while (answer4 > 3);

                                switch(answer4) { //switch and case statements, 1 case for each brand, and 2 car types for each brand
                                    case 1:(answer4 == 1); //Case for Mercedez
                                    do{
                                        model();
                                        cout << "1: Mercedez-Benz E 350 - $66 210" << endl;
                                        cout << "2: Mercedez-Benz C300 4MATIC - $54 440" << endl;
                                    cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Mercedez-Benz E 350" << endl;
                                            totalPrice = 0 + 66210;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Mercedez-Benz E 350 for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Mercedez-Benz C300 4MATIC" << endl;
                                            totalPrice = 0 + 54440;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Mercedez-Benz C300 4MATIC for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 2:(answer4 == 2); //Case for Tesla
                                    do{
                                        model();
                                        cout << "1: Tesla Model S P90D - $68 900" << endl;
                                        cout << "2: Tesla Model 3 Long Range - $53 000" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Tesla Model S P90D" << endl;
                                            totalPrice = 0 + 68900;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Tesla Model S P90D for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Tesla Model 3 Long Range" << endl;
                                            totalPrice = 0 + 53000;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Tesla Model 3 Long Range for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 3:(answer4 == 3); //Case for Genesis
                                    do{
                                        model();
                                        cout << "1: Genesis G90 5.0 Ultimate - $77 345" << endl;
                                        cout << "2: Genesis G80 3.3T Sport -  $59 015" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Genesis G90 5.0 Ultimate" << endl;
                                            totalPrice = 0 + 77345;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Genesis G90 5.0 Ultimate for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Genesis G80 3.3T Sport" << endl;
                                            totalPrice = 0 + 59015;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Genesis G80 3.3T Sport for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    
                                }
                        }
             }
//==============================================================================================================================================================================================//                  
//---------------------------------------------------------------------------------------------SUVs---------------------------------------------------------------------------------------------//
//==============================================================================================================================================================================================//                 
            if(answer2 == 3) //coding for the SUVs
            {
                int retBud = budget(); //getting the returned value of "budget"
                cout << "Your budget is: $" << retBud << endl;
                    cout << "\n";
                
                        if(retBud < 49999){ //if the users budget is below $49999, displays the 3 car brands below
                            do{
                            cout << "What brand do you want?"<< endl;
                            cout << "-----------------------" << endl;
                            cout << "1: RAM" << endl;
                            cout << "2: Lincoln" << endl;
                            cout << "3: Acura" << endl;
                                cin >> answer3; //getting the users input for desired brands
                            } while (answer3 > 3);
                                
                                switch(answer3) { //switch and case statements, 1 case for each brand, and 2 car types for each brand
                                    case 1:(answer3 == 1); //Case for RAM
                                    
                                        model();
                                        cout << "1: RAM 1500 Bighorn - $43 275" << endl;
                                        cout << "2: RAM 2500 Tradesman - $45 695" << endl;
                                        cin >> carChoice;//User picks car model
                                    
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the RAM 1500 Bighorn" << endl;
                                            totalPrice = 0 + 43275;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the RAM 1500 Bighorn for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the RAM 2500 Tradesman" << endl;
                                            totalPrice = 0 + 45695;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the RAM 2500 Tradesman for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 2:(answer3 == 2); //Case for Lincoln
                                    do{
                                        model();
                                        cout << "1: Lincoln Nautilus Select - $46 000" << endl;
                                        cout << "2: Lincoln MKC Reserve  -	$48 280" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Lincoln Nautilus Select" << endl;
                                            totalPrice = 0 + 46000;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Lincoln Nautilus Select for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();

                                        } else if(carChoice == 2){
                                            cout << "You selected the Lincoln MKC Reserve" << endl;
                                            totalPrice = 0 + 48280;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Lincoln MKC Reserve for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 3:(answer3 == 3); //Case for Acura
                                    do{
                                        model();
                                        cout << "1: Acura MDX 3.5L - $47 395" << endl;
                                        cout << "2: Acura RDX Technology Package - $41 795" << endl; 
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Acura MDX 3.5L" << endl;
                                            totalPrice = 0 + 47395;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Acura MDX 3.5L for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Acura RDX Technology Package" << endl;
                                            totalPrice = 0 + 41795;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Acura RDX Technology Package for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                }

                        } else if(retBud >= 50000){ //if the users budget is above $50000, displays the 3 car brands below
                            do{
                                cout << "What brand do you want?"<< endl;
                                cout << "-----------------------" << endl;
                                cout << "1: Volvo" << endl;
                                cout << "2: Lexus" << endl;
                                cout << "3: Alfa Romeo" << endl;
                                cin >> answer4;//getting the users input for desired brands
                            } while (answer4 > 3);

                                switch(answer4) { //switch and case statements, 1 case for each brand, and 2 car types for each brand
                                    case 1:(answer4 == 1); //Case for Volvo
                                    do{
                                        model();
                                        cout << "1: Volvo XC60 T5 Momentum  -  $52 945" << endl;
                                        cout << "2: Volvo XC90 T6 Momentum - $66 814" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Volvo XC60 T5 Momentum" << endl;
                                            totalPrice = 0 + 52945;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Volvo XC60 T5 Momentum for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Volvo XC90 T6 Momentum" << endl;
                                            totalPrice = 0 + 66814;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Volvo XC90 T6 Momentum for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 2:(answer4 == 2); //Case for Lexus
                                    do{
                                        model();
                                        cout << "1: Lexus RX 350L Premium - $56 922" << endl;
                                        cout << "2: Lexus LX 570 Two-row - $98 475" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);    
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Lexus RX 350L Premium" << endl;
                                            totalPrice = 0 + 56922;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Lexus RX 350L Premium for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Lexus LX 570 Two-row" << endl;
                                            totalPrice = 0 + 98475;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Lexus LX 570 Two-row for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                    case 3:(answer4 == 3); //Case for Alfa
                                    do {
                                        model();
                                        cout << "1: Alfa Romeo Stelvio Quadrifoglio  - $79 640" << endl;
                                        cout << "2: Alfa Romeo Stelvio Ti - $57 640" << endl;
                                        cin >> carChoice;//User picks car model
                                    } while (carChoice > 2);
                                        cout << "\n";
                                        if(carChoice == 1){
                                            cout << "You selected the Alfa Romeo Stelvio Quadrifoglio" << endl;
                                            totalPrice = 0 + 79640;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Alfa Romeo Stelvio Quadrifoglio for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        } else if(carChoice == 2){
                                            cout << "You selected the Romeo Stelvio Ti" << endl;
                                            totalPrice = 0 + 57640;
                                            totalPrice = UsedCar(totalPrice);
                                                    CarColor(CarColor3); //Exterior Color choice
                                                    IntColor2(IntColor3); //Interior Color Choice
                                                    totalPrice = totalPrice + 1000;//adds price of the colors
                                                    totalPrice = Accessory(totalPrice); //calling the function for accessories
                                                    cout << "\nYour total overall price is now $" << totalPrice << endl; 
                                                    WarrantyCal(totalPrice); //calling function for Warranty
                                                    FinanceCal(totalPrice); //calling function for finance
                                                    ofstream myfile;
                                                    myfile.open("C++ Project.txt");
                                                    myfile << "You selected the Romeo Stelvio Ti for a total of $" << totalPrice << " After all the accessories" << endl;
                                                    myfile.close();
                                        }
                                    break;
                                }
                        
                         } 
            }
//========================================================================================================================================================================================================//         
//---------------------------------------------------------------------------------------------'No' For loops---------------------------------------------------------------------------------------------//
//========================================================================================================================================================================================================//     
         }else if (answer == 2) //Code based on if User says "No" at first question   
        {
        int inventoryCheck; //Asks a User for question on if they want to see the inventory
      cout << "\nAre you sure you don't want to even browse our inventory? Select a car type to recieve a list via Text file!" << endl;
      cout << "1. Coupe" << endl << "2. Sedan" << endl << "3. SUV" << endl;
      cout << "4. Exit" << endl;
      cin >> inventoryCheck;
      {
      if (inventoryCheck == 1) //IF the User wants to see the Coupe Inventory
      {
        
        string coupe[12] = {"Audi A5 2.0T Premium Quattro- $45 985", "Audi TT- $49 790", "Mazda MX-5 Miata RF Club- $34 140", "Mazda MX-5 Miata Grand Touring-	$33 625" 
        ,"Honda Civic Lx- $21 545", "Honda Civic Si Base- $25 930", "Chevrolet Camaro ZL1- $67 410", "Chevrolet Corvette Grand Sport- $92 310", "Ford Mustang GT 350- $64 525",
        "Ford Shelby GT 350- $87 425", "BMW 440 iDrive- $60 330", "BMW M2 Competition- $62 470"}; //Array for all the Coupes in our inventory

        ofstream myfile ("CarInventory.txt");
        if (myfile.is_open())
        {
            myfile << "These are our selection of Coupes:\n\n";
            for(int a=0; a < 12; a++){ 
                myfile << coupe[a] << "\n" ; //For loop to output coupes in text file
            }
            myfile.close();
            cout << "\nThe list for Coupes has been printed\n" <<  "Thanks for stopping by" << endl;
        }
        else 
            cout << "Unable to open file";
        return 0;
        
        }
      else if (inventoryCheck == 2) //IF the User wants to see the sedans Inventory
    {
        string sedan[12] = {"Chrysler Touring- $35 105", "Chrysler 200 Limited- $26 955", "Nissan Sentra SR- $21 795", "Nissan Altima 25 SR- $27 935", "Toyota Camry LE- $26 479", 
        "Toyota Corolla LE $23 129", "Mercedez-Benz E 350- $66 210", "Mercedez-Benz C300 4MATIC- $54 440", "Tesla Model S P90D- $68 900", "Tesla Model 3 Long Range $53 000", 
        "Genesis G90 5.0 Ultimate $77 345", "Genesis G80 3.3T Sport $59 015"}; //Array for all the Sedans in our inventory
        ofstream myfile ("CarInventory.txt");
        if (myfile.is_open())
        {
            myfile << "These are our selection of Sedans:\n\n";
            for(int a=0; a < 12; a++){
                myfile << sedan[a] << "\n" ; //For loop to output all sedans in text file
            }
            myfile.close();
            cout << "\nThe list for Sedans has been printed\n" <<  "Thanks for stopping by" << endl;
        }
        else 
            cout << "Unable to open file";
        return 0;     
        }
      else if (inventoryCheck == 3){ //IF the User wants to see the SUVs
        string suv[12] = {"RAM 1500 Bighorn- $43 275", "RAM 2500 Tradesman- $45 695", "Lincoln Nautilus Select $46 000", "Lincoln MKC Reserve- $48 280", "Acura MDX 3.5L- $47 395"
        , "Acura RDX Technology Package	$41 795", "Volvo XC60 T5 Momentum- $52 945", "Volvo XC90 T6 Momentum- $66 814", "Lexus RX 350L Premium- $56 922", 
        "Lexus LX 570 Two-row-$98 475", "Alfa Romeo Stelvio Quadrifoglio- $79 640", "Alfa Romeo Stelvio Ti- $57 640"}; //Array for all the SUVs in our inventory
        ofstream myfile ("CarInventory.txt");
        if (myfile.is_open())
        {
            myfile << "These are our selection of SUVs:\n\n";
            for(int a=0; a < 12; a++){
                myfile << suv[a] << "\n" ; //For loop to output all SUVs in text file
            }
            myfile.close();
            cout << "\nThe list for SUV has been printed\n" <<  "Thanks for stopping by" << endl;
        }
        else 
            cout << "Unable to open file";
        return 0;     
      }
      else if(inventoryCheck == 4){
        exit;
      }
    }while (inventoryCheck > 4);
    }
    
    

}

