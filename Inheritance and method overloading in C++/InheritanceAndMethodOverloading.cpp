#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "Student.h"
#include "Professor.h"

//I worked with Chris Benson on this assignment.
//We bounced ideas off each other and we helped each other if we encountered bugs


int main()
{

    /*
    The main() method provided in the assignment will a 
    number from standard input which represents the number of
    records to read from standard input.  A student record is
    a single line containing space-separated:
    s name major minor. A professor record is a 
    single line containing p name publications rank.
    */ 

   
    //variable to represent number of files being read in
   int numOfFiles = 0;

   //read in the number of files being read in 
     std::cin >> numOfFiles; 

    //variable to represent id
    int id = 0;

    std::string x, Name, input1, input2; 

   //for loop to read in each file and format the string
   for(int i = 0; i < numOfFiles; i++)
   {

       //increment id
       id++;
       //read in inputs 
        std:: cin >> x >> Name >> input1 >> input2;

        //student and professor objects 
        Student s(input1, input2, Name, id);
        Professor p(input1, input2, Name, id);

        if(x.compare("s") == 0 || x.compare("p") == 0)
        {
            //read in the type of file being read in
            if (x.compare("s") == 0) 
            {
                //display output
                std::cout << s.getData() << std:: endl;
            }
            else
            {
                //display output 
                std::cout << p.getData() << std:: endl;
            } 
        }
        else
        {
               //try-catch 
                char fileName[] = " ";
                    std::ifstream infile(fileName);

                    try
                    {
                        if(infile)
                        {
                            std::cout << infile.rdbuf();
                        }
                        else
                        {
                            throw 404;
                        }
                        
                    }
                    catch (int myNum)
                    {
                        std::cerr << "Oh no! File not found. \n";
                        std::cerr << "Error Number: " << myNum;

                        return 1;
                    }
        
                    }  
         }


    return 0;
  
}