#include <iostream>
using namespace std;

int main()
{
	int choice,x,grade,num;
	cout<<"\t\t------------------***************************************************************------------------\n";
	cout<<"\t\t------------------********************\t C++ Tutorial \t*************************------------------\n";
	cout<<"\t\t------------------***************************************************************------------------\n";
	
	cout<<"\n\t\t\t\t\t\t\t GET STARTED!!! \n";
		cout<<"\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		
		do
		{
			cout<<"\n";
       		cout<<"\n\t Enter the topic you want to learn to continue OR Enter 14 to stop the program: ";
       		cin>>choice;
       		cout<<endl;
			
			if(choice >0 && choice <=14)
 	 		switch (choice)
	   	{
	   		case 1:
			
			/*
			cout<<"\tC++ Introduction";
			cout<<"\n\t\t What is C++\?\n";
			cout<<"\t\t\t - C++ is a cross-platform language that can be used to create high-performance applications.\n";
			cout<<"\t\t\t - C++ was developed by Bjarne Stroustrup, as an extension to the C language.\n";
			cout<<"\t\t\t - C++ gives programmers a high level of control over system resources and memory.\n";
			cout<<"\n\t\t Why use C++\?\n";
			cout<<"\t\t\t - C++ is one of the world's most popular programming languages.\n";
			cout<<"\t\t\t - C++ is an object-oriented programming language which gives a clear structure to programs and allows\n";
			cout<<"\t\t\t   code to be reused, lowering development costs.\n";
			cout<<"\t\t\t - C++ is portable and can be used to develop applications that can be adapted to multiple platforms.\n";
			cout<<"\n";
			*/
        	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			/*
			case 2:
			cout<<"\tC++ SYNTAX\n\n";
			cout<<"\t\#include \<iostream\>"<<endl;
			cout<<"\t using namespace std\;"<<endl;
			cout<<"\t "<<endl;
			cout<<"\tint main\(\) {"<<endl;
  			cout<<"\t cout<<\"Statement\"\;"<<endl;
  			cout<<"\t return 0\;"<<endl;
			cout<<"\t}"<<endl;
			cout<<"\n\t Source Code Explantion:";
			cout<<"\n\t   Line 1: \#include \<iostream\> is a header file library that lets us work with input and output objects,"; 
			cout<<"\n\t           such as cout \(used in line 5\). Header files add functionality to C++ programs.";
			cout<<"\n\t   Line 2: using namespace std means that we can use names for objects and variables from the standard library.";
			cout<<"\n\t   Line 3: A blank line. C++ ignores white space. But we use it to make the code more readable.";
			cout<<"\n\t   Line 4: Another thing that always appear in a C++ program, is int main\(\). This is called a function. Any code"; 
			cout<<"\n\t           inside its curly brackets {} will be executed.";
			cout<<"\n\t   Line 5: cout \(pronounced \"see-out\"\) is an object used together with the insertion operator \(\<\<\) to output/print";
			cout<<"\n\t           text.";
			cout<<"\n\t   Line 6: return 0 ends the main function.";
			cout<<"\n\t  Line 7: Do not forget to add the closing curly bracket } to actually end the main function.\n";
			cout<<"\n";
			*/
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 3:
			/*
			cout<<"\tC++ Output \(Print Text\)\n\n";
			cout<<"\tThe cout object, together with the << operator, is used to output values/print text. You can add as many cout objects as you\n";
			cout<<"\twant. However, note that it does not insert a new line at the end of the output.\n";
			cout<<"\tExample:"<<endl;
			cout<<"\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"   "<<endl;
			cout<<"\t  int main\(\) {"<<endl;
  			cout<<"\t   cout<<\"Hello Philippines\"\;"<<endl;
  			cout<<"\t   cout>>\"Hello World\"\;"<<endl;
  			cout<<"\t   return 0\;"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"\n";
			*/
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 4:
			/*
			cout<<"\tC++ COMMENTS\n\n";
			cout<<"\tComments can be used to explain C++ code, and to make it more readable. It can also be used to prevent execution when testing\n";
			cout<<"\talternative code. Comments can be singled-lined or multi-lined.\n";
			cout<<"\tSingle-line comments start with two forward slashes \(//\). Any text between // and the end of the line is ignored by the compiler\n";
			cout<<"\t\(will not be executed\).\n";
			cout<<"\tBlock comments or multi-line comments has a start\(/*\) and an end symbol\(\). Any line between /* and  is also a comment.\n";
			cout<<"\n\tExample:"<<endl;
			cout<<"\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"   "<<endl;
			cout<<"\t  int main\(\) {"<<endl;
			cout<<"\t  //display Hello World"<<endl;
  			cout<<"\t   cout>>\"Hello World\"\;"<<endl;
  			cout<<"\t   return 0\;"<<endl;
			cout<<"\t  }"<<endl;
			*/
			cout<<"\n";
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 5:
			/*
			cout<<"\tC++ Variables\n\n";
			cout<<"\tVariables are containers for storing data values. The equal sign is used to assign values to the variable.\n\n";
			cout<<"\tIn C++, there are different types of variables \(defined with different keywords\), for example:\n";
			cout<<"\t\t  int - stores integers (whole numbers), without decimals, such as 123 or -123\n";
			cout<<"\t  double - stores floating point numbers, with decimals, such as 19.99 or -19.99\n";
			cout<<"\t  char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes\n";
			cout<<"\t  string - stores text, such as \"Hello World\". String values are surrounded by double quotes\n";
			cout<<"\t  bool - stores values with two states: true or false\n";
			cout<<"\n\t Example:"<<endl;
			cout<<"\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"   "<<endl;
			cout<<"\t  int main\(\) {"<<endl;
			cout<<"\t  int myNum=18"<<endl;
			cout<<"\t  //display myNum"<<endl;
  			cout<<"\t   cout\<\<myNum\;"<<endl;
  			cout<<"\t   return 0\;"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"\n";
			*/
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 6:
			/*
			cout<<"\tC++ Useer Input\n\n";
			cout<<"\tYou have already learned that cout is used to output \(print\) values. Now we will use cin to get user input.\n";
			cout<<"\tcin is a predefined variable that reads data from the keyboard with the extraction operator \(>>\).\n";
			cout<<"\n\tExample:"<<endl;
			cout<<"\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"   "<<endl;
			cout<<"\t  int main\(\) {"<<endl;
			cout<<"\t  int my_Age"<<endl;
			cout<<"\t  //display my_Age"<<endl;
  			cout<<"\t   cout\<\<\"Your Age: \"\;"<<endl;
  			cout<<"\t   cin>>my_Age\;"<<endl;
  			cout<<"\t   return 0\;"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"\n";
			*/
			cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 7:
			/*
			cout<<"\tC++ If\n\n";
			cout<<"\tYou already know that C++ supports the usual logical conditions from mathematics:\n";
			cout<<"\t  Less than: a < b\n";
			cout<<"\t  Less than or equal to: a <= b\n";
			cout<<"\t  Greater than: a > b\n";
			cout<<"\t  Greater than or equal to: a >= b\n";
			cout<<"\t  Equal to a == b\n";
			cout<<"\t  Not Equal to: a != b\n";
			cout<<"\tYou can use these conditions to perform different actions for different decisions.\n";
			cout<<"\tUse if to specify a block of code to be executed, if a specified condition is true.\n\n";
			cout<<"\tSyntax:\n";
			cout<<"\t if \(condition\) {"<<endl;
 	 		cout<<"\t // block of code to be executed if the condition is true"<<endl;
			cout<<"\t }\n"<<endl;
			cout<<"\tExample Source Code:\n";
			cout<<"\t \#include <iostream>\n";
			cout<<"\t  using namespace std;\n";
			cout<<"\n\tint main()\n\t { \n";
			cout<<"\t  int x=9;"<<endl;
			cout<<" "<<endl;
			cout<<"\t if \(x>=10\)"<<endl;
			cout<<"\t   {"<<endl;
			cout<<"\t    cout<<\"The value is greater than or equal to 10;"<<endl;
			cout<<"\t   }"<<endl;
			cout<<"\t  return 0\;";
			cout<<"\n\t  }\n";
			cout<<"\n";
			
			cout<<"\t\tEXAMPLE PROGRAM\n";
			cout<<endl;
	        cout<<"\t\tIdentify if age is eligible to vote\n";
	        int age;
	
	        cout<<"\t\tEnter age:";
	        cin>>age;
	
        	if(age >=18)
        	{
    		cout<<"\t\tYou are elligible to vote!\n";
        	}
			*/
	
        	cout<<"\t\t==========================\n";
        	cout<<endl;
        	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 8:
			/*
			cout<<"\tC++ If Else\n\n";
			cout<<"\tUse the else if statement to specify a new condition if the first condition is false.\n\n";
			cout<<"\tSyntax:\n";
			cout<<"\t if \(condition 1\) {"<<endl;
			cout<<"\t  // block of code to be executed if condition 1 is true"<<endl;
			cout<<"\t }"; 
			cout<<"\t else {"<<endl;
			cout<<"\t  // block of code to be executed if the condition1 is false and condition 2 is false"<<endl;
			cout<<"\t }"<<endl;
			cout<<"\tExample Source Code: \n";
			cout<<"\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"   "<<endl;
			cout<<"\t  int main\(\) {"<<endl;
			cout<<"  "<<endl;
			cout<<"\t  int age;"<<endl;
			cout<<"\t  cout<<\"Age:\";"<<endl;
			cout<<"\t  cin>>age;"<<endl;
			cout<<"  "<<endl;
			cout<<"\t  if \(x>=18\)"<<endl;
			cout<<"\t   {"<<endl;
			cout<<"\t    cout<<\"You are eligible to vote\!\";"<<endl;
			cout<<"\t   }"<<endl;
			cout<<"\t  else"<<endl;
			cout<<"\t   {";
			cout<<"\n\t    cout<<\"You are not eligible to vote\!\";"<<endl;
			cout<<"\t   }"<<endl;
		  	cout<<"\t  return 0\;";
			cout<<"\n\t  }\n";
			cout<<"\n";
			
		    cout<<"\t\tSAMPLE PROGRAM\n";	
			cout<<"\t\tEnter value of x=";
			cin>>x;
			if(x>=10)
			{
			cout<<endl;
            cout<<"\t\tThe value is greater than or equal 50\n";
            cout<<"\t\t=====================================\n";
            }
            else
            {
            cout<<endl;
            cout<<"\t\tThe value is lesser than 50\n";
            cout<<"\t\t===========================\n";
            cout<<endl;
            }
			*/
      
		    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 9:
			/*
			cout<<"\tC++ Else If\n\n";
			cout<<"\tUse the else if statement to specify a new condition if the first condition is false.\n\n";
			cout<<"\tSyntax:\n";
			cout<<"\t if \(condition 1\) {"<<endl;
			cout<<"\t  // block of code to be executed if condition 1 is true"<<endl;
			cout<<"\t }"; 
			cout<<"\t else if \(condition 2\) {"<<endl;
			cout<<"\t  // block of code to be executed if the condition 1 is false and condition 2 is true"<<endl;
			cout<<"\t }"; 
			cout<<"\t else {"<<endl;
			cout<<"\t  // block of code to be executed if the condition1 is false and condition 2 is false"<<endl;
			cout<<"\t }"<<endl;
			cout<<"\tExample Source Code: \n";
			cout<<"\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"   "<<endl;
			cout<<"\t  int main\(\) {"<<endl;
			cout<<"\t  "<<endl;
			cout<<"\t  int grade;"<<endl;
			cout<<"  "<<endl;
			cout<<"\t  cout<<\"Enter your grade: \";"<<endl;
			cout<<"\t  cin>>grade;"<<endl;
			cout<<"  "<<endl;
			cout<<"\t  if \(\(grade>=90\)&&\(grade<=100\)\) {"<<endl;
			cout<<"\t   cout<<\"Excellent\";"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"  "<<endl;
			cout<<"\t  else if \(\(grade>=80\)&&\(grade<=89\)\) {"<<endl;
			cout<<"\t   cout<<\"Very Satisfactory\";"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"   "<<endl;
			cout<<"\t  else if \(\(grade>=70\)&&\(grade<=79\)\) {"<<endl;
			cout<<"\t   cout<<\"Satisfactory\";"<<endl;
			cout<<"\t  }"<<endl;	
			cout<<"  "<<endl;
			cout<<"\t  else if \(grade<=69\) {"<<endl;
			cout<<"\t   cout<<\"Failed\";"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"\t  return 0\;";
			cout<<"\t  }";
			cout<<"\n";
			cout<<endl;
			
			cout<<"\tSAMPLE PROGRAM\n";
            cout<<"\Enter your grade:";
            cin>>grade;

            if(grade ==100)
            {
           	cout<<"\t\tgrade is 100\n";
            }

            else if(grade ==50)
            {
        	cout<<"\t\tgrade is 50\n";
            }
           else if(grade>40)
            {
        	cout<<"\t\tGrade is greater than 40\n";
            }
            else
            {
           	cout<<"\t\tinvalid";
            }
			*/
		    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 10:
			/*
			cout<<"\tC++ Switch\n\n";
			cout<<"\tUse the switch statement to select one of many code blocks to be executed.\n\n";
			cout<<"\tSyntax: \n";		
			cout<<"\t  switch\(expression\) {"<<endl;
  			cout<<"\t  case x:"<<endl;
   			cout<<"\t   // code block"<<endl;
   			cout<<"\t  break;"<<endl;
  			cout<<"\t  case y:"<<endl;
    		cout<<"\t   // code block"<<endl;
    		cout<<"\t  break;"<<endl;
  			cout<<"\t  default:"<<endl;
    		cout<<"\t   // code block"<<endl;
			cout<<"\t  }"<<endl;	
			cout<<"\tExample Source Code: \n";
			cout<<"\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"\t   "<<endl;
			cout<<"\t  int main\(\) {"<<endl;
			cout<<"  "<<endl;
			cout<<"\t  char letter;"<<endl;
    		cout<<"\t  cout<<\" ------ MENU -------\"<<endl;"<<endl;
 			cout<<"  "<<endl;  
   			cout<<"\t  cout<<\" What's your order ma'am/sir? \";"<<endl;
    		cout<<"  "<<endl;
   			cout<<"\t  cout<<\" My order is: \";"<<endl;
   			cout<<"\t  cin>>letter;"<<endl;
			cout<<"  "<<endl;
    		cout<<"\t  switch \(letter\) {"<<endl;
    		cout<<"\t  case \'a\':"<<endl;
      	  	cout<<"\t   cout<<\"apple\";"<<endl;
      	  	cout<<"\t   break;"<<endl;
       		cout<<"\t  case \'b\':"<<endl;
        	cout<<"\t   cout<<\"banana\";"<<endl;
        	cout<<"\t   break;"<<endl;
        	cout<<"\t  case \'c\':"<<endl;
        	cout<<"\t   cout<<\"coconut\";"<<endl;
        	cout<<"\t   break;"<<endl;
        	cout<<"\t  default:"<<endl;
        	cout<<"\t  // the letter doesn't match any case constant"<<endl; 
    		cout<<"\t   cout<<\"Sorry, it's not in the menu.\";"<<endl;
        	cout<<"\t   break;"<<endl;
    		cout<<"\t  }"<<endl;
    		cout<<"\tWhen C++ reaches a break keyword, it breaks out of the switch block. This will stop the execution"<<endl;
			cout<<"\tof more code and case testing inside the block. When a match is found, and the job is done, it's"<<endl; 
			cout<<"\ttime for a break. There is no need for more testing."<<endl;
			cout<<"\n\tThe default keyword specifies some code to run if there is no case match.\n";
			cout<<"\n";
			*/
		    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 11:
			/*
    		cout<<"\tC++ For Loop\n\n";
    		cout<<"\tWhen you know exactly how many times you want to loop through a block of code, use the for loop "<<endl;
			cout<<"\tinstead of a while loop\n"<<endl;
			cout<<"\tSyntax: \n";
			cout<<"\t  for \(variable itialization\; condition\; increment operation\)"<<endl;
			cout<<"\t  {"<<endl;
			cout<<"\t    //loop statements\;"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"\tExample Source Code:"<<endl;
			cout<<"\n\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"\t  int main\(\)"<<endl;
			cout<<"\t  {"<<endl;
			cout<<"\t    int a\;"<<endl;
			cout<<"\t    for \( a=1\; a<=10\; a++\)"<<endl;
			cout<<"\t    {"<<endl;
			cout<<"\t    cout<<\"The value of a is: \"<<a<<\\'n\'\;"<<endl;
			cout<<"\t    }"<<endl;
			cout<<"\t  }";
			cout<<"\n";
			*/
		    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 12:
			cout<<"\tC++ While Loop\n\n";
			cout<<"\tThe while loop loops through a block of code as long as a specified condition is true.\n"<<endl;
			cout<<"\tSyntax: \n";
			cout<<"\t  while \(condition\)"<<endl;
			cout<<"\t  {"<<endl;
			cout<<"\t    //loop statements\;"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"\tExample Source Code:"<<endl;
			cout<<"\n\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"\t  int main\(\)"<<endl;
			cout<<"\t  {"<<endl;
			cout<<"\t    int b=1\;"<<endl;
			cout<<"\t    while \(b<=10\)"<<endl;
			cout<<"\t    {"<<endl;
			cout<<"\t    cout<<\"The value of b is: \"<<b<<\\'n\'\;"<<endl;
			cout<<"\t    b++\;"<<endl;
			cout<<"\t    }"<<endl;
			cout<<"\t  }";
			cout<<"\n";
		    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			case 13:
			cout<<"\tC++ Do While Loop\n\n";
			cout<<"\tThe do/while loop is a variant of the while loop. This loop will execute the code block once, before"<<endl;
			cout<<"\tchecking if the condition is true, then it will repeat the loop as long as the condition is true.\n"<<endl;
			cout<<"\tSyntax: \n";
			cout<<"\t  do"<<endl;
			cout<<"\t  {"<<endl;
			cout<<"\t    //statement execution\;"<<endl;
			cout<<"\t  }"<<endl;
			cout<<"\t  while \(condition\)\;"<<endl;
			cout<<"\tExample Source Code: "<<endl;
			cout<<"\n\t  \#include \<iostream\>"<<endl;
			cout<<"\t  using namespace std\;"<<endl;
			cout<<"\t  int main\(\)"<<endl;
			cout<<"\t  {"<<endl;
			cout<<"\t    int c=50\;"<<endl;
			cout<<"\t    do"<<endl;
			cout<<"\t    {"<<endl;
			cout<<"\t     cout<<\"The value of c is: \"<<c<<\\'n\'\;"<<endl;
			cout<<"\t     c=c+10\;"<<endl;
			cout<<"\t    }"<<endl;
			cout<<"\t    while \(t<=120\)\;"<<endl;
			cout<<"\t  }";
			cout<<"\n";
			
		    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t***                           MENU                              ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     1. C++ Introduction           8. C++ If Else            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     2. C++ Syntax                 9. C++ Else If            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     3. C++ Output                 10. C++ Switch            ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     4. C++ Comments               11. C++ For Loop          ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     5. C++ Variables              12. C++ While Loop        ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     6. C++ Input                  13. C++ Do While Loop     ***\n";
		cout<<"\t\t\t\t***                                                             ***\n";
		cout<<"\t\t\t\t***     7. C++ If                                               ***\n";
		cout<<"\t\t\t\t*******************************************************************\n";
		cout<<"\t\t\t\t*******************************************************************\n";
			break;
			
			default:
		    cout<<"\t";cout<<"\t";
		    cout<<"\n\t\t\t\t +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			cout<<"\n\t\t\t\t +   Practice makes perfect! keep learning Future Programmer;)!  +\n";
			cout<<"\n\t\t\t\t +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
			break;
			
			}
			}
		while(choice !=14);
				
return 0;		
}	
