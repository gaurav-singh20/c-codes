// file handling is the concecpt by which we are writing, storing and saving the inputed data into some text file
// on the other hand same data is to be read from the respective text file.

//file pointer - ther is a concept of file pointer which can find the specific file by checking the address hold by it.
//there are 5 major operations which are performed on file -
//1. creation of a new file.
//2. opening an existing file.
//3. reading data from the file
//4. writing data in a file
//5. closing a file

//steps for the processing of a file
//step-1: declare a file pointer
//step-2: open a file using fopen() function
//step-3: process the file using suitable function 
//step-4: close the file using fclose() function

//there are different modes by which we canuse different operations 
//r: open a file in read mode
//w: open the file in the write mode
//a: open the file in the append mode(adding)
//r+ : can open the file in read as well as write mode 
//w+ : opens the file in read as well as write mode
//a+ : all the three modes are open.(reading,writing and append)
//rb: opens the binary file in reading mode
//wb: opens the binary file in write mode
//ab: opens the binary file in append mode
//rb+ : can open the binary file in read as well as write mode
//wb+ : opens the binary file in read as well as write mode
//ab+ : all the three modes are open.(reading,writing and append)
