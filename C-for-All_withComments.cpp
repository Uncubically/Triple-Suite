/*As we all learn and engage in this programming subject, our group has created a system called 
C++ FOR ALL, which consisted mainly of all of the lessons we have learned since day one. Our goal 
was to apply all of the knowledge we had gained; feed our curiosity through researching additional 
features to make our program work exactly as we wanted; and achieve a system that will help us 
recall and become familiar with programming. Furthermore, we have made this system easy to read 
and understand not only for those with programming experience, but also for those who are not.The 
"C++ FOR ALL" includes what are known as comments, within the code. That allows everyone to 
understand the meaning and function of every term they may come across. Implying that it is a 
beginner-friendly system in which we can all teach, learn, and enjoy programming at the same time.*/

//mdas menu loop

#include <iostream> //include iostream library
using namespace std; //use the std namespace

int main(){ //main function where the program begins executing

    string yes_no; //declaring a variable
    system("cls"); //clear console screen
    system("Color 0A"); //change console color to green

    //print message to console
    cout<<"\n\n\n";
    cout<<" ::::::::                                  :::::::::: ::::::::  :::::::::           :::     :::        :::        \n";
    cout<<":+:    :+:     :+:           :+:           :+:       :+:    :+: :+:    :+:        :+: :+:   :+:        :+:        \n";
    cout<<"+:+            +:+           +:+           +:+       +:+    +:+ +:+    +:+       +:+   +:+  +:+        +:+        \n";
    cout<<"+#+       +#++:++#++:++ +#++:++#++:++      :#::+::#  +#+    +:+ +#++:++#:       +#++:++#++: +#+        +#+        \n";
    cout<<"+#+            +#+           +#+           +#+       +#+    +#+ +#+    +#+      +#+     +#+ +#+        +#+        \n";
    cout<<"#+#    #+#     #+#           #+#           #+#       #+#    #+# #+#    #+#      #+#     #+# #+#        #+#        \n";
    cout<<" ########                                  ###        ########  ###    ###      ###     ### ########## ########## \n\n\n\n";

    firstchoice: // label for the goto statement to jump to
    //print continuous message to console
    cout<<"\t\t\tDo you want to see the real deal?\n\n";
    cout<<"\t\t\t Y=Yes       N=No\n\n";
    cout<<"\t\t\tENTER YOUR CHOICE:";

    cin>>yes_no; //store input from user to yes_no
    //if yes_no is equals to "y" or "Y" execute the code below
    if (yes_no == "Y" || yes_no == "y"){
    system ("cls"); //clear console screen
    system("color 0B"); //change console color to light blue
    
    MainMenu: // label for the goto statement to jump to
        system ("cls"); //clear console screen
        system("color 0B"); //change console color to light blue

        string choices; //declaring a variable
        //print message to console
        cout<<"\t\t\t\t\t C++ FOR ALL\n";
        cout<<"************************************************************************************************\n";
        cout<<"*                                                                                              *\n";
        cout<<"*\t\t  1------------------------------------------DISPLAY HELLO WORLD!              *\n";
        cout<<"*\t\t  2------------------------------cin print 'Hello My name: ______              *\n";
        cout<<"*\t\t  3-----------------------------------------------MDAS CALCULATOR              *\n";
        cout<<"*\t\t  4----------------------------------------GUESS THE MAGIC NUMBER              *\n";
        cout<<"*\t\t  5---------------------------------TEST YOUR ELIGIBILITY TO VOTE              *\n";
        cout<<"*\t\t  6-------------------------------------GRADE SCALE PASSED/FAILED              *\n";
        cout<<"*\t\t  7--------------------------COMPILED OPERATIONS (switch+dowhile)              *\n";
        cout<<"*\t\t  8------------------MULTIPLICATION TABLE USING-FOR-WHILE-DOWHILE              *\n";
        cout<<"*\t\t  9------------------------------------------------------ABOUT US              *\n";
        cout<<"*\t\t  10---------------------------------------------------------EXIT              *\n";
        cout<<"*                                                                                              *\n";
        cout<<"************************************************************************************************\n";
        cout<<"\033[36mPlease enter your choice: \033[0m";
        cin>>choices; //store input from user to choices
        
        system ("cls"); //clear console screen
        system ("color 0B"); //change console color to light blue
        
            //DISPLAY HELLO WORLD OPTION
            //if choices is equals to "1" execute the code below
            if (choices == "1"){
                displayMenu: //label for goto statement

                system("color 0B"); //change console color to light blue
                system ("cls"); //clear console screen 
                char HelloWorldChoice; //declaring a variable
                int HelloWorldSwitch; //declaring a variable

                //print message to console
                cout<<"\t\t\t\t\tDisplay Hello World:\n\n";
                cout<<"************************************************************************************************\n";
                cout<<"*                                                                                              *\n";
                cout<<"*\t\t  1------------------------------------------display HELLO WORLD!              *\n";
                cout<<"*\t\t  2---------------------------------------display HAPPY BIRTHDAY!              *\n";
                cout<<"*\t\t  3------------------------------------------display COMPUTER ART              *\n";
                cout<<"*\t\t  4------------------------------------------go back to main menu              *\n";
                cout<<"*                                                                                              *\n";
                cout<<"************************************************************************************************\n";
                cout<<"\t\t\t\t\tPlease enter your choice: ";
                cin >> HelloWorldChoice; //store input from user to choice HelloWorldChoice
                if (cin.fail()) {
                // Input is not valid (e.g. user entered a string instead of a number)
                //cin.flush();
                cin.ignore();

                // Go back to main menu
                goto MainMenu;
                }

                string HelloWorldYN; //declaring a variable

                    //switch statement  execute selected blocks based on the value of HelloWorldChoice
                    
                    switch (HelloWorldChoice){

                        //if HelloWorldChoice is equals to '1' this will be executed
                        case '1' :
                            system ("cls"); //clear console screen 
                            system("color 3"); //change console color to Aqua

                            //print message to console
                            cout<<" /$$   /$$           /$$ /$$                                                   /$$       /$$\n";
                            cout<<"| $$  | $$          | $$| $$                                                  | $$      | $$\n";
                            cout<<"| $$  | $$  /$$$$$$ | $$| $$  /$$$$$$        /$$  /$$  /$$  /$$$$$$   /$$$$$$ | $$  /$$$$$$$\n";
                            cout<<"| $$$$$$$$ /$$__  $$| $$| $$ /$$__  $$      | $$ | $$ | $$ /$$__  $$ /$$__  $$| $$ /$$__  $$\n";
                            cout<<"| $$__  $$| $$$$$$$$| $$| $$| $$  \\ $$      | $$ | $$ | $$| $$  \\ $$| $$  \\__/| $$| $$  | $$\n";
                            cout<<"| $$  | $$| $$_____/| $$| $$| $$  | $$      | $$ | $$ | $$| $$  | $$| $$      | $$| $$  | $$\n";
                            cout<<"| $$  | $$|  $$$$$$$| $$| $$|  $$$$$$/      |  $$$$$/$$$$/|  $$$$$$/| $$      | $$|  $$$$$$$\n";
                            cout<<"|__/  |__/ \\_______/|__/|__/ \\______/        \\_____/\\___/  \\______/ |__/      |__/ \\_______/\n";
                            cout<<"\n\n";               
                            cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                            cin>>HelloWorldYN; //store input from user to HelloWorldYN

                                //if HelloWorldYN is equals to "Y" or "y" this will be executed
                                if (HelloWorldYN=="y" || HelloWorldYN=="Y"){
                                    goto MainMenu; //jump to the line labeled MainMenu
                                }
                                //if not equals to "Y" or "y" this will be executed
                                else{
                                    goto displayMenu; //jump to the line labeled displayMenu
                                }
                            break;  //exit the switch statement
                        system ("cls"); //clear console screen

                        //if HelloWorldChoice is equals to '2' this will be executed
                        case '2':
                            system ("cls"); //clear console screen      
                            system("color 5"); //change console color to Purple
                            
                            //print message to console
                            cout<<"  _    _                           ____  _      _   _         _             _ \n";
                            cout<<" | |  | |                         |  _ \\(_)    | | | |       | |           | |\n";
                            cout<<" | |__| | __ _ _ __  _ __  _   _  | |_) |_ _ __| |_| |__   __| | __ _ _   _| |\n";
                            cout<<" |  __  |/ _` | '_ \\| '_ \\| | | | |  _ <| | '__| __| '_ \\ / _` |/ _` | | | | |\n";
                            cout<<" | |  | | (_| | |_) | |_) | |_| | | |_) | | |  | |_| | | | (_| | (_| | |_| |_|\n";
                            cout<<" |_|  |_|\\__,_| .__/| .__/ \\__, | |__d__/|_|_|   \\__|_| |_|\\__,_|\\__,_|\\__, (_)\n";
                            cout<<"              | |   | |     __/ |                                      __/ |  \n";
                            cout<<"              |_|   |_|    |___/                                      |___/   \n";
                            cout<<"\n\n";
                            cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                            cin>>HelloWorldYN; //store input from user to HelloWorldYN
                                
                                //if HelloWorldYN is equals to "y" or "Y" this will be executed
                                if (HelloWorldYN=="y" || HelloWorldYN=="Y"){
                                    goto MainMenu; //jump to the line labeled MainMenu //jump to the line labeled MainMenu
                                }
                                //if not equals to "Y" or "y" this will be executed
                                else{
                                    goto displayMenu; //jump to the line labeled displayMenu
                                }
                            
                            break;  //exit the switch statement //exit the switch statement
                        
                        //if HelloWorldChoice is equals to '3' this will be executed
                        case '3':
                            system ("cls"); //clear console screen
                            system("color 6"); //change console color to Yellow

                            //print message to console
                            cout<<"___________________\n";
                            cout<<"| _______________ |\n";
                            cout<<"| |XXXXXXXXXXXXX| |\n";
                            cout<<"| |XXXXXXXXXXXXX| |\n";
                            cout<<"| |XXXXXXXXXXXXX| |\n";
                            cout<<"| |XXXXXXXXXXXXX| |\n";
                            cout<<"| |XXXXXXXXXXXXX| |\n";
                            cout<<"|_________________|\n";
                            cout<<"     _[_______]_\n";
                            cout<<" ___[___________]___\n";
                            cout<<"|         [_____] []|__\n";
                            cout<<"|         [_____] []|  \\__\n";
                            cout<<"L___________________J     \' \'___\'/\n";
                            cout<<" ___________________      /\\ \n";
                            cout<<"/###################\\    (__)          \n";
                            cout<<"\n\n";
                            cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                            cin>>HelloWorldYN; //store input from user to HelloWorldYN

                                //if HelloWorldYN is equals to "Y" or "y" this will be executed
                                if (HelloWorldYN=="y" || HelloWorldYN=="Y"){
                                    goto MainMenu; //jump to the line labeled MainMenu //jump to the line labeled MainMenu
                                //if not equals to "Y" or "y" this will be executed
                                }else{
                                    goto displayMenu; //jump to the line labeled displayMenu
                                }
                            
                            break;  //exit the switch statement

                        //if HelloWorldChoice is equals to '4' this will be executed
                        case '4':
                            system ("cls"); //clear console screen
                            goto MainMenu; //jump to the line labeled MainMenu //jump to the line labeled MainMenu
                            break;  //exit the switch statement

                        //if HelloWorldChoice is equals to not equal to different code blocks this will be executed    
                        default:
                            goto displayMenu;
                            system("cls");//clear console screen
                            cout<<"\033[31mINVALID INPUT!\nINVALID INPUT!\nINVALID INPUT!\033[0m\n"; //print message to console
                            goto displayMenu; //jump to the line labeled displayMenu
                            break;  //exit the switch statement
                        }
            
                }


            //CIN PRINT OPTION
            //if choices is equals to "2" execute the code below
            else if (choices == "2"){
                char CinChoice; //declaring a variable
                char CinChoiceYN; //declaring a variable
                string YourName; //declaring a variable
                    system ("cls"); //clear console screen

                    cinMenu: //label for goto statement
                    system ("cls"); //clear console screen

                    //print message to console
                    cout<<"\t\t\t\t\tcin print 'Hello, My name: ______   \n";
                    cout<<"************************************************************************************************\n";
                    cout<<"*                                                                                              *\n";
                    cout<<"*\t\t  1--------------------------------------Hello, My Name is_______              *\n";
                    cout<<"*\t\t  2------------------------------------------go back to main menu              *\n";
                    cout<<"*                                                                                              *\n";
                    cout<<"************************************************************************************************\n";
                    cout << "Please enter your choice: ";
                    cin>>CinChoice; //store input from user to CinChoice


                    //switch statement blocks of code to execute selected blocks based on the value of CinChoice
                    switch (CinChoice)
                    {
                        //if CinChoice is equals to '1' this will be executed
                        case '1':
                            system("cls"); //clear console screen

                            cout<<"Enter your Name: "; //print message to console
                            cin>>YourName; //store input from user to YourName

                            //print message to console
                            cout<<"\n\n"; 
                            cout<<"************************************************************************************************\n";
                            cout<<"*                                                                                              *\n";
                            cout<<"*\t\t\t\t  Hello, My Name is "<<YourName<<"                                        *\n";
                            cout<<"*                                                                                              *\n";
                            cout<<"************************************************************************************************\n";
                            cout<<"\n\n\n";
                            cout << "Enter 'y' to go back to main menu or any character to go back in MDAS Menu:";
                            cin>>CinChoiceYN; //store input from user to CinChoiceYN

                                //if not equals to "Y" or "y" this will be executed
                                if (CinChoiceYN=='y' || CinChoiceYN=='Y'){
                                    goto MainMenu; //jump to the line labeled MainMenu //jump to the line labeled MainMenu
                                }
                                //if not equals to "Y" or "y" this will be executed
                                else{
                                    goto cinMenu; //jump to the line labeled cinMenu
                                }
                            break;  //exit the switch statement

                        //if CinChoice is equals to '1' this will be executed
                        case '2':
                            goto MainMenu; //jump to the line labeled MainMenu
                            break;  //exit the switch statement

                        //if CinChoice is equals to not equal to different code blocks this will be executed
                        default:
                            goto cinMenu;
                            system ("cls"); //clear console screen
                            cout<<"INVALID INPUT! TRY AGAIN.\n"; //print message to console
                            goto cinMenu; //jump to the line labeled cinMEnu
                            break;  //exit the switch statement
                        }
                }


            //MDAS CALCULATOR OPTION
            //if choices is equals to "3" execute the code below
            else if (choices == "3"){
                system ("cls"); //clear console screen
                MDASMenu: //label for goto statement
                system ("cls"); //clear console screen

                cout << "\t\t\t\t\tMDAS calculator! \n";  //print message to console
                //declaring a variables
                int num1, num2, answer, remainder, variable; 
                char mdasYN;
                
                //print message to console
                cout << "\t\t\tPlease choo  se your desired operator listing from: \n";
                cout<<"************************************************************************************************\n";
                cout<<"*                                                                                              *\n";
                cout<<"*\t\t  1--------------------------------------------------ADDITION                  *\n";
                cout<<"*\t\t  2-----------------------------------------------SUBTRACTION                  *\n";
                cout<<"*\t\t  3--------------------------------------------MULTIPLICATION                  *\n";
                cout<<"*\t\t  4--------------------------------------------------DIVISION                  *\n";
                cout<<"*\t\t  5--------------------------------------go back to main menu                  *\n";
                cout<<"*                                                                                              *\n";
                cout<<"************************************************************************************************\n";
                cout << "Your choice: ";
                cin >> variable; //declaring variable
                
                //switch statement blocks of code to execute selected blocks based on the value of variable
                switch (variable)
                {   
                //if variable is equals to 1 this will be executed
                case 1: 
                        system ("cls"); //clear console screen
                        //print message to console
                        cout << "\t\t\tYou chose Addition!\n";
                        cout << "Please enter the value of the first number: ";
                        cin >> num1; //store input from user to num2
                        cout << "Please enter the value of the second number: ";
                        cin >> num2; //store input from user to num1

                        answer = num1+num2;

                        cout<<"************************************************************************************************\n";
                        cout << "\t\t\tThe sum of " << num1 << " and " << num2 << " is = " << answer << endl;
                        cout<<"************************************************************************************************\n";

                        cout<<"\n\n"; 
                        cout << "Enter 'y' to go back to main menu or any character to go back in MDAS Menu: ";
                        cin>>mdasYN;
                            if (mdasYN=='y' || mdasYN=='Y'){
                                goto MainMenu; //jump to the line labeled MainMenu
                            }else{
                                cout<<"error!";
                                goto MDASMenu; //jump to the line labeled MDASMenu
                            }
                                
                        break;  //exit the switch statement

                //if variable is equals to 2 this will be executed
                case 2:
                        system ("cls"); //clear console screen 
                        cout << "\t\t\tYou chose Subtraction!\n";
                        cout << "Please enter the value of the first number: ";
                        cin >> num1; //store input from user to num1 
                        cout << "Please enter the value of the second number: ";
                        cin >> num2; //store input from user to num2

                        answer = num1-num2;
                        cout<<"************************************************************************************************\n";
                        cout << "\t\t\tThe difference of " << num1 << " and " << num2 << " is = " << answer << endl;
                        cout<<"************************************************************************************************\n";

                        cout<<"\n\n"; 
                        cout << "Enter 'y' to go back to main menu: ";
                        cin>>mdasYN;
                            if (mdasYN=='y' || mdasYN=='Y'){
                                    goto MainMenu; //jump to the line labeled MainMenu
                            }else{
                                cout<<"error!";
                                goto MDASMenu; //jump to the line labeled MDASMenu
                            }
                        break;  //exit the switch statement

                    
                //if variable is equals to 3 this will be executed
                case 3:
                        system ("cls"); //clear console screen 
                        cout << "\t\t\tYou chose Multiplication!\n";
                        cout << "Please enter the value of the first number: ";
                        cin >> num1;
                        cout << "Please enter the value of the second number: ";
                        cin >> num2;

                        answer = num1*num2; //operation to be performed
                        cout<<"************************************************************************************************\n";
                        cout << "\t\t\tThe Product of " << num1 << " and " << num2 << " is = " << answer << endl;
                        cout<<"************************************************************************************************\n";
                        
                        cout<<"\n\n";  
                        cout << "Enter 'y' to go back to main menu or any character to go back in MDAS Menu: ";
                        cin>>mdasYN;
                            if (mdasYN=='y' || mdasYN=='Y'){
                                    goto MainMenu; //jump to the line labeled MainMenu
                            }else{
                                cout<<"error!";
                                goto MDASMenu; //jump to the line labeled MDASMenu //jump to the line labeled MDASMenu
                            }
                        break;  //exit the switch statement
                    
                //if variable is equals to 4 this will be executed
                case 4:
                        system ("cls"); //clear console screen 
                        cout << "\t\t\tYou chose Division!\n";
                        cout << "Please enter the value of the first number: ";
                        cin >> num1;
                        cout << "Please enter the value of the second number: ";
                        cin >> num2;



                        answer = num1/num2;
                        remainder = num1%num2;
                        cout<<"************************************************************************************************\n";
                        cout << "\t\t\tThe Quotient of " << num1 << " and " << num2 << " is = " << answer << endl;
                        cout << "\t\t\tThe Remainder of " << num1 << " and " << num2 << " is = " << remainder << endl;
                        cout<<"************************************************************************************************\n";

                        cout<<"\n\n"; 
                        cout << "Enter 'y' to go back to main menu or any character to go back in MDAS Menu: ";
                        cin>>mdasYN;
                            if (mdasYN=='y' || mdasYN=='Y'){
                                system("cls");
                                    goto MainMenu; //jump to the line labeled MainMenu                                
                            }else{
                                system("cls");
                                cout<<"error!";
                                goto MDASMenu; //jump to the line labeled MDASMenu
                            }
                        break;  //exit the switch statement


                //if variable is equals to 5 this will be executed
                case 5: //go back to main menu
                    system ("cls"); //clear console screen
                    goto MainMenu; //jump to the line labeled MainMenu
                    break;  //exit the switch statement

                //if variable is equals to not equal to different code blocks this will be executed
                default:
                    {
                        goto MDASMenu;
                        system ("cls"); //clear console screen
                        cout << "INVALID INPUT! TRY AGAIN." << endl;
                        goto MDASMenu; //jump to the line labeled MDASMenu
                        break;  //exit the switch statement
                    }
                    
                }
                
            }


            //GUESS THE MAGIC NUMBER OPTION
            //if choices is equals to "4" execute the code below
            else if (choices == "4"){
                system ("cls"); //clear console screen 
                ChMagicNum: //label for goto statement
                system ("cls"); //clear console screen
                cout<<"\t\t\t\t\tGuess the magic number!\n"; //print message to console

                //declaring a variables
                int MagicNum; 
                string MagicNumYN;
                            
                cout<<"Guess the magic number from 1-10: ";  //print message to console
                cin>>MagicNum; //store input from user to MagicNum

                    //if MagicNum is equals to 6 execute the code below
                    if(MagicNum==6){
                    cout<<"************************************************************************************************\n";
                        cout<<"\t\t\tCongrats you guess the magic number! \n";
                        cout<<"************************************************************************************************\n";
                    }
                    //if MagicNum is not equals to 6 execute the code below
                    else if(MagicNum!=6){
                        cout<<"ohhh tooo BAD its not you're lucky day!";
                    }
                            //print message to console
                            cout<<"\n\n"; 
                            cout << "Enter 'y' to go back to main menu or enter anything to go back in choosing the magic number:";
                            
                            cin>>MagicNumYN; //store input from user to MagicNum

                                //if MagicNum is equals to y and Y execute the code below
                                if (MagicNumYN=="y" || MagicNumYN=="Y"){
                                        goto MainMenu; //jump to the line labeled MainMenu
                                }
                                //if not equals to "y" and "Y" execute the code below
                                else{
                                    cout<<"error! please try again!";
                                        goto ChMagicNum; //jump to the line labeled ChMagicNum
                                }
            }


            //ELIGIBILITY TO VOTE OPTION
            //if choices is equals to "5" execute the code below
            else if (choices == "5"){
                system("cls");
                voteMenu: //label for goto statement
                system ("cls"); //clear console screen

                int age; //declaring a variable
                //print message to screen
                cout<<"\t\t\t\t\tTEST YOUR ELIGIBILITY TO VOTE\n";
                cout<<"Please enter your age:";
                cin>>age;
                cout<<"\n\n"; 

                    //if age is equals to more than  18 execute the code below
                    if (age>=18)
                    {   
                        cout<<"************************************************************************************************\n";
                        cout<<"\t\t\tYou are eligible to vote\n";
                        cout<<"************************************************************************************************\n";
                    }
                    //if age is equals to less than 17 execute the code below
                    else if (age<=17)
                    {
                        cout<<"************************************************************************************************\n";
                        cout<<"\t\t\tYou are not eligble to vote\n";
                        cout<<"************************************************************************************************\n";
                    }
                    //if age is not equals the condition above execute the code below
                    else
                    {
                        cout<<"Please enter valid age\n";
                        
                    }
                    //option to enter choice to go back to menu or try again
                    cout<<"\n\n"; 
                            char VoteYN;
                            cout << "Enter 'y' to go back to main menu or enter anything to test your age again:";
                            cin>>VoteYN;
                                if (VoteYN=='y' || VoteYN=='Y'){
                                        goto MainMenu; //jump to the line labeled MainMenu
                                }else{
                                    system("cls");
                                    cout <<"\n\n";
                                    cout<<"\t\t\t\t\t!Test your age again!\n\n";
                                        goto voteMenu; //jump to the line labeled voteMenu
                                }
            }


            //GRADE SCALE OPTION
            //if choices is equals to "6" execute the code below
            else  if (choices == "6"){
                system("cls");
                cout<<"\t\t\t\t\tGRADING SCALE PASSED OR FAILED\n";
                float grade; //declaring a variable
                
                cout <<"Enter your Grade: "; 
                cin >> grade; 
                    //if grade is >= to 90 execute the code below
                    if (grade>=90) {
                        cout<<"************************************************************************************************\n";
                        cout << "\t\t\tExcellent!\n"; 
                        cout<<"************************************************************************************************\n";
                    }
                    //if grade is >= to 80 execute the code below
                    else if (grade>=80) {
                        cout<<"************************************************************************************************\n";
                        cout << "\t\t\tVery Good!\n";
                        cout<<"************************************************************************************************\n";
                    }
                    //if grade is >= to 75 execute the code below
                    else if (grade>=75){
                        cout<<"************************************************************************************************\n";
                        cout << "\t\t\tSatisfactory!\n";
                        cout<<"************************************************************************************************\n";
                    }
                    //if condition above is not meet execute the code below
                    else {
                        cout<<"************************************************************************************************\n";
                        cout <<"\t\t\tFailed :(\n";
                        cout<<"************************************************************************************************\n";
                    }

                cout<<"\n\n"; 

                    //option to enter chooice to go back to menu or try again
                    char gradingYN;
                    cout << "Enter 'y' to go back to main menu:";
                    cin>>gradingYN;
                        if (gradingYN=='y' || gradingYN=='Y'){
                                goto MainMenu; //jump to the line labeled MainMenu
                        } else{
                            cout<<"error!";
                        }
            }


            //COMPILED SHAPE AREA OPTION
            //if choices is equals to "7" execute the code below
            else if(choices == "7"){
                system("cls"); //clear console screen
                shapesMenu: //label for goto statement
                system ("cls"); //clear console screen
                char choices;

                //print message on screen
                cout<<"\t\t\t\t\tCompiled Operations:\n\n";
                cout<<"***********************************************************************************************\n";
                cout<<"*                                                                                             *\n";
                cout<<"*\t\t  A----------------------------------------Area of triangle                   *\n";
                cout<<"*\t\t  B---------------------------------------Area of trapezoid                   *\n";
                cout<<"*\t\t  C------------------------------------------Area of circle                   *\n";
                cout<<"*\t\t  D-----------------------------------Area of parallelogram                   *\n";
                cout<<"*\t\t  E---------------------------------------Area of rectangle                   *\n";
                cout<<"*\t\t  F------------------------------------------Area of square                   *\n";
                cout<<"*\t\t  G-----------------------------------------Area of ellipse                   *\n";
                cout<<"*\t\t  H-------------------------------Circumference of a circle                   *\n";
                cout<<"*\t\t  X------------------------------------go back to main menu                   *\n";
                cout<<"*                                                                                             *\n";
                cout<<"***********************************************************************************************\n";
                cout<<"\t\tPlease Enter Your Chosen Operation:";
                cin>>choices;


                if(choices != 'A', 'B', 'C', 'D', 'E', 'F', 'G','H')
                system("cls");

                    //switch statement blocks of code to execute selected blocks based on the value of choices
                    switch(choices){
                        //if choices is equals to 'A' this will be executed
                        case 'A' : 
                            system("cls");
                            cout<<"\t\tThis formula is for the area of triangle\n";
                            int base,height1,area1; //declaring a variable

                            cout<<"Enter value of base:";
                            cin>>base;
                            cout<<"Enter value of height:";
                            cin>>height1;
                            area1=(base*height1)/2;
                            cout<<"\n************************************************************************************************\n";
                            cout<<"\t\tThe area of the triangle is:"<<area1<<"\n";
                            cout<<"************************************************************************************************\n";

                                char triangleYN;
                                cout << "\nEnter 'y' to go back to main menu:";
                                cin>>triangleYN;
                                    if (triangleYN=='y' || triangleYN=='Y'){
                                            system ("cls"); //clear console screen
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    }
                                    else {
                                        system ("cls"); //clear console screen
                                        goto shapesMenu; //jump to the line labeled shapesMenu
                                    }
                                        break;  //exit the switch statement

                        //if choices is equals to 'B' this will be executed
                        case 'B' : 
                            system ("cls"); //clear console screen
                            cout<<"\t\tThis formula is for the area of tapezoid\n";
                            double basetop, basebot, height, area; //declaring a variable

                            cout<<"Enter value of base top:";
                            cin >> basetop;
                            cout<<"Enter value of base bot:";
                            cin >>basebot;
                            cout<<"Enter value of height:";
                            cin >> height;
                            
                            area=((basetop+basebot)/(2)*height);
                            
                            cout<<"\n************************************************************************************************\n";
                            cout<<"\t\tThe area of Trapezoid is:"<<area<<"\n";
                            cout<<"************************************************************************************************\n";

                            char trapezoidYN;
                                cout << "\nEnter 'y' to go back to main menu:";
                                cin>>trapezoidYN;
                                    if (trapezoidYN=='y' || trapezoidYN=='Y'){
                                            system ("cls"); //clear console screen
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    }
                                    else {
                                        goto shapesMenu; //jump to the line labeled shpesMenu
                                    }

                                        break;  //exit the switch statement

                        //if choices is equals to 'C' this will be executed
                        case 'C' : 
                            system("cls");
                            cout<<"\t\tThis formula is for the area of a circle\n";
                            double radius,area2; //declaring a variable

                            cout<<"\t\tEnter value of radius:";
                            cin>>radius;
                            area2=3.14*radius*radius;

                            cout<<"\n************************************************************************************************\n";
                            cout<<"\t\tThe area of the Circle is: "<<area2<<"\n";
                            cout<<"************************************************************************************************\n";

                            char circleYN;
                                cout << "\nEnter 'y' to go back to main menu:";
                                cin>>circleYN;
                                    if (circleYN=='y' || circleYN=='Y'){
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    } else{
                                        goto shapesMenu; //jump to the line labeled shapesMenu
                                    }
                                        break;  //exit the switch statement

                        //if choices is equals to 'D' this will be executed
                        case 'D' : 
                            system("cls");
                            cout<<"\t\tThis formula is for the area of parallelogram\n";
                            double base1,height2,area3; //declaring a variable

                            cout<<"Enter value of base: ";
                            cin>>base1;
                            cout<<"Enter value of height: ";
                            cin>>height2;
                            area3=base1*height2;

                            cout<<"\n************************************************************************************************\n";
                            cout<<"\t\tThe area of Parallelogram is: "<<area<<"\n";
                            cout<<"************************************************************************************************\n";

                            char parallelogramYN;
                                cout << "\nEnter 'y' to go back to main menu:";
                                cin>>parallelogramYN;
                                    if (parallelogramYN=='y' || parallelogramYN=='Y'){
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    } else{
                                        goto shapesMenu; //jump to the line labeled shapesMenu
                                    }
                                        break;  //exit the switch statement

                        //if choices is equals to 'E' this will be executed
                        case 'E' : 
                            system("cls");
                            cout<<"\t\tThis formula is for the area of rectangle\n";
                            double height_E,width_E,area_E; //declaring a variable

                            cout<<"Enter value of height:";
                            cin>>height_E;
                            cout<<"Enter value of width:";
                            cin>>width_E;
                            
                            area=height*width_E;

                            cout<<"\n************************************************************************************************\n";
                            cout<<"\t\tThe area of Rectangle is "<<area_E<<"\n";
                            cout<<"************************************************************************************************\n";

                            char rectangleYN;
                                cout << "\nEnter 'y' to go back to main menu:";
                                cin>>rectangleYN;
                                    if (rectangleYN=='y' || rectangleYN=='Y'){
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    } else{
                                        goto shapesMenu; //jump to the line labeled shapesMenu
                                    }
                                        break;  //exit the switch statement

                        //if choices is equals to 'F' this will be executed
                        case 'F' : 
                            system("cls");
                            cout<<"\t\tThis formula is for the area of square\n";
                            double length_side_F,area_F; //declaring a variable 

                            cout<<"Enter length of sides:";
                            cin>>length_side_F;

                            area_F=length_side_F*length_side_F;

                            cout<<"\n************************************************************************************************\n";
                            cout<<"\t\tThe area of the Square is "<<area_F<<"\n";
                            cout<<"************************************************************************************************\n";

                            char squareYN;
                                cout << "\nEnter 'y' to go back to main menu:";
                                cin>>squareYN;
                                    if (squareYN=='y' || squareYN=='Y'){
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    } else{
                                        goto shapesMenu; //jump to the line labeled shapesMenu
                                    }
                                        break;  //exit the switch statement

                        //if choices is equals to 'G' this will be executed
                        case 'G' : 
                            system("cls");
                            cout<<"\t\tThis formula is for the area of ellipse\n";
                            float X,Y,area_G; //declaring a variable
                            cout<<"Enter value of X:";
                            cin>>X;
                            cout<<"Enter value of Y:";
                            cin>>Y;
                            area_G=3.142*X*Y;

                            cout<<"\n************************************************************************************************\n";
                            cout<<"\t\tThe area of Ellipse is "<<area_G<<"\n";
                            cout<<"************************************************************************************************\n";

                            char ellipseYN;
                                cout << "\nEnter 'y' to go back to main menu or anything to go back to the compiled operations:";
                                cin>>ellipseYN;
                                    if (ellipseYN=='y' || ellipseYN=='Y'){
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    } else{
                                        goto shapesMenu; //jump to the line labeled shapesMenu
                                    }
                                        break;  //exit the switch statement

                        //if choices is equals to 'H' this will be executed
                        case 'H' : 
                            system("cls");
                            cout<<"\t\tThis formula is fo the circumference of a circle\n";
                            float radius_H,circumference_H; //declaring a variable

                            cout<<"Enter vaue of radius:";
                            cin>>radius_H;
                            
                            circumference_H=2*3.141592*radius_H;

                            cout<<"\n************************************************************************************************\n";
                            cout<<"The circumference of the circle is "<<circumference_H<<"\n";
                            cout<<"************************************************************************************************\n";

                            char circumferenceYN;
                                cout << "\nEnter 'y' to go back to main menu:";
                                cin>>circumferenceYN;
                                    if (circumferenceYN=='y' || circumferenceYN=='Y'){
                                            goto MainMenu; //jump to the line labeled MainMenu
                                    } else{
                                        cout<<"error!";
                                        goto shapesMenu; //jump to the line labeled shapesMenu
                                    }

                                        break;  //exit the switch statement

                        //if choices is equals to 'x' this will be executed
                        case 'X' :
                            goto MainMenu; //jump to the line labeled MainMenu
                            break;  //exit the switch statement

                        //if choices is not equals on the condition above this will be executed
                        default : 
                        goto shapesMenu;
                        cout<<"INVALID INPUT! TRY AGAIN!\n";
                        goto shapesMenu; //jump to the line labeled shapesMenu
                        break;  //exit the switch statement
                        }
                    
                }

            
            //MULTIPLICATION TABLE OPTION
            //if choices is equals to "8" execute the code below
            else if (choices == "8"){
                tableMenu: //label for goto statement
                system ("cls"); //clear console screen
                //declaring a variables
                int loop; 
                char loop1, loop2;
                string loopYN;
                string MtBack;
                
                do{
                    
                    cout<<"\t\t\t\t\tMultiplication Table:\n\n";
                    cout<<"************************************************************************************************\n";
                    cout<<"*                                                                                              *\n";
                    cout<<"*\t\t  ----------------Choose Your Loop:------------------------------              *\n";
                    cout<<"*\t\t  1------------------------------------------------------for Loop              *\n";
                    cout<<"*\t\t  2----------------------------------------------------While Loop              *\n";
                    cout<<"*\t\t  3-------------------------------------------------Do-While Loop              *\n";
                    cout<<"*\t\t  4------------------------------------------go back to main menu              *\n";
                    cout<<"*                                                                                              *\n";
                    cout<<"************************************************************************************************\n";
                    cout << "Enter Your Choice:";
                    cin>>loop;
                
                //switch statement blocks of code to execute selected blocks based on the value of loop
                switch(loop){
                    case 1:
                    int i, a, b ; //declaring a variable
                    system ("cls"); //clear console screen
                    cout<< "\t\t\t\t\tFOR LOOP" << endl;		
                    cout << "=========================================================="<<endl;	
                    cout<<"Select Number to Multiply:";
                    cin>> a;
                    cout<<"Select the Number of Range:";
                    cin>> b;
                    cout << "==========================================================="<<endl;
                    cout <<"Answers:"<< endl;
                
                    for (i = 1 ; i<=b ; i++){
                    cout<< a <<" x " << i <<" = " <<( a*i )<< endl;
                    }
                    cout<<"\n\n";               
                    cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                    cin>>loopYN;
                        if (loopYN=="y" || loopYN=="Y"){
                            goto MainMenu; //jump to the line labeled MainMenu
                        }else{
                            goto tableMenu; //jump to the line labeled tableMenu
                        }
                    break;  //exit the switch statement
                    
                    case 2:
                    system ("cls"); //clear console screen
                    cout<< "\t\t\t\t\t WHILE LOOP" << endl;
                    cout << "=================================================================="<<endl;
                    cout<<endl<<"Click Letter 'w' to start the While Loop!\n";
                    cin>>loop1;
                    
                    if(loop1=='w' || loop1=='W'){
                        case 'w':
                        int nmbr = 1, c = 1; //declaring a variable
                        cout << "==================================================================="<<endl;
                        cout << "Enter a Positive Integer: ";
                        cin >> nmbr;
                        
                    
                        while (c <= 20) {
                            cout << nmbr <<"*"<< c <<"=" << nmbr * c <<endl;
                                ++c;}
                                
                            }
                            else{
                                cout<<endl<<"INVALID INPUT!";
                            }
                        cout<<"\n\n";               
                        cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                        cin>>loopYN;
                            if (loopYN=="y" || loopYN=="Y"){
                                goto MainMenu; //jump to the line labeled MainMenu
                            }else{
                                goto tableMenu; //jump to the line labeled tableMenu
                            }
                            break;  //exit the switch statement
                        
                    case 3:
                        system ("cls"); //clear console screen
                        cout<<"\t\t\t\t\tDO-WHILE LOOP!"<<endl;
                        cout<< "================================================================="<<endl;
                        cout<<"Click Letter 'd' to start the Do-While Loop!\n";
                        cin>>loop2;
                            
                        if(loop2=='d' || loop2=='D'){
                            system ("cls"); //clear console screen     
                            int p, a, b ; //declaring a variable
                            char a1[1000], b1[1000];
                                cout<<"\t\t\tDo-While Loop"<< endl;
                            cout << "================================================================="<<endl;
                            cout<<"Select Number to Multiply:"<<a1;
                            cin>> a;
                            cout<<"Select the Number of Range:"<<b1;
                            cin>> b;
                            cout << "=================================================================="<<endl;
                            cout <<"Answers:"<< endl;

                            int m=1; //declaring a variable
                            do{
                            cout<< a <<" x " << p <<" = " <<( a*p )<< endl;
                                p++;
                                }
                                while(p<=b);
                                cout<<endl;
                                }                
                    
                            cout<<"\n\n";               
                            cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                            cin>>loopYN;
                                if (loopYN=="y" || loopYN=="Y"){
                                    goto MainMenu; //jump to the line labeled MainMenu
                                }else{
                                    goto tableMenu; //jump to the line labeled tableMenu
                                } break;  //exit the switch statement



                    case 4:
                        cout << "====================================================================="<<endl;
                        
                                cout << "Enter 'y' to go back to main menu or enter anything to go back:";
                                cin>>MtBack;
                                    if (MtBack=="y" || MtBack=="Y"){
                                        goto MainMenu; //jump to the line labeled MainMenu
                                    }else{
                                        goto tableMenu; //jump to the line labeled tableMenu
                                    }
                                
                            break;  //exit the switch statement
                    
                        
                    default:
                    goto tableMenu;
                    cout<<"INVALID INPUT!";
                    goto tableMenu; //jump to the line labeled tableMenu
                    break;  //exit the switch statement
                }
                }
                while(loop!=4);
                    goto MainMenu; //jump to the line labeled MainMenu
                }


            //ABOUT US OPTION
            //if choices is equals to "9" execute the code below
            else if (choices == "9"){
                GroupInfo: //label for goto statement
                system("cls"); //clear console screen

                //print message to console
                cout<<"************************************************************************************************\n";
                cout<<"*                                                                                              *\n";
                cout<<"*\t\t  ---------------------------------------------------------------              *\n";
                cout<<"*\t\t  ------------------------ GROUP MEMBERS ------------------------              *\n";
                cout<<"*\t\t  ------1------------DE GUZMAN, MIKAELA MAE L.------------------              *\n";
                cout<<"*\t\t  ------2-----------------LAMUG, JASTIN G.-----------------------              *\n";
                cout<<"*\t\t  ------3---------------MARAYAG, AXL ROSE T.---------------------              *\n";
                cout<<"*\t\t  ------4----------------RAMOS, JOHN MARK B.---------------------              *\n";
                cout<<"*\t\t  ------5---------SAGAYSAY, MICKYLLA JULIANA A.------------------              *\n";
                cout<<"*\t\t  ------6------------VELASCO, FLORIE JOY A.----------------------              *\n";
                cout<<"*\t\t  ---------------------------------------------------------------              *\n";
                cout<<"*                                                                                              *\n";
                cout<<"************************************************************************************************\n";
                cout<<"\n\n";
                    string AboutUsChoice;//declaring a variable
                    cout << "Select a number to view their profile or press y to go back to main menu: "; //print message to console
                    cin>>AboutUsChoice;//store input from user to AboutUsCHoice

                    //if AboutUsChoice is equals to "y" or "Y" this will be executed
                    if (AboutUsChoice=="y"||AboutUsChoice=="Y"){
                            goto MainMenu; //jump to the line labeled MainMenu
                        }
                        //if AboutUsChoice is equals to "1" this will be executed
                        else if (AboutUsChoice=="1"){
                            //open the specified URL using default web browser
                            system("start https://www.facebook.com/miks.26/");
                            goto GroupInfo; //jump to the line labeled GroupInfo
                        }
                        //if AboutUsChoice is equals to "1" this will be executed
                        else if (AboutUsChoice=="2"){
                            //open the specified URL using default web browser
                            system("start https://www.facebook.com/baby.jassy.26");

                            goto GroupInfo; //jump to the line labeled GroupInfo
                        }
                        //if AboutUsChoice is equals to "1" this will be executed
                        else if (AboutUsChoice=="3"){
                            //open the specified URL using default web browser
                            system("start https://www.facebook.com/axlrose.marayag");

                            goto GroupInfo; //jump to the line labeled GroupInfo
                        }
                        //if AboutUsChoice is equals to "1" this will be executed
                        else if (AboutUsChoice=="4"){
                            //open the specified URL using default web browser
                            system("start https://www.facebook.com/profile.php?id=100084393586553");

                            goto GroupInfo; //jump to the line labeled GroupInfo
                        }
                        //if AboutUsChoice is equals to "1" this will be executed
                        else if (AboutUsChoice=="5"){
                            //open the specified URL using default web browser
                            system("start https://www.facebook.com/fuushiiguuroo");

                            goto GroupInfo; //jump to the line labeled GroupInfo
                        }
                        //if AboutUsChoice is equals to "1" this will be executed
                        else if (AboutUsChoice=="6"){
                            //open the specified URL using default web browser
                            system("start https://www.facebook.com/juyang.velasco");

                            goto GroupInfo; //jump to the line labeled GroupInfo

                        }
                            //if AboutUsChoice is not equal to different condition this will be executed instead
                            else{
                                cout<<"error"; //print message to console
                                
                                goto GroupInfo; //jump to the line labeled GroupInfo
                            }
                
                
                }


            //EXIT OPTION
                //if choices is equals to "10" execute the code below
                else if (choices == "10"){
                goto end; //jump to the line labeled end

                }

                //if choices is not equals to the condition above execute the code below
                else { 
                system("color 4");           
                goto MainMenu; //jump to the line labeled MainMenu
            
            }
    
    
    }   //if yes_no is equals to "n" or "N" execute the code below
        else if(yes_no == "N"|| yes_no == "n")
        {
            end: //label for goto statement
            system("cls");
            system("color 0E"); //change color
            cout<<" /$$$$$$$$ /$$   /$$  /$$$$$$  /$$   /$$ /$$   /$$       /$$     /$$ /$$$$$$  /$$   /$$ /$$\n";
            cout<<"|__  $$__/| $$  | $$ /$$__  $$| $$$ | $$| $$  /$$/      |  $$   /$$//$$__  $$| $$  | $$| $$\n";
            cout<<"   | $$   | $$  | $$| $$  \\ $$| $$$$| $$| $$ /$$/        \\  $$ /$$/| $$  \\ $$| $$  | $$| $$\n";
            cout<<"   | $$   | $$$$$$$$| $$$$$$$$| $$ $$ $$| $$$$$/          \\  $$$$/ | $$  | $$| $$  | $$| $$\n";
            cout<<"   | $$   | $$__  $$| $$__  $$| $$  $$$$| $$  $$           \\  $$/  | $$  | $$| $$  | $$|__/\n";
            cout<<"   | $$   | $$  | $$| $$  | $$| $$\\  $$$| $$\\  $$           | $$   | $$  | $$| $$  | $$    \n";
            cout<<"   | $$   | $$  | $$| $$  | $$| $$ \\  $$| $$ \\  $$          | $$   |  $$$$$$/|  $$$$$$/ /$$\n";
            cout<<"   |__/   |__/  |__/|__/  |__/|__/  \\__/|__/  \\__/          |__/    \\______/  \\______/ |__/\n";
            }
                else{
                    system("cls");
                    goto firstchoice; //jump to the line labeled firstchoice
                }


        return 0; //to indicate that thee program has terminated successfully
            } 

