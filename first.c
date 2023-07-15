
//write a program to check whethe number is odd or even
#include<stdio.h>  //For printf an

#include<stdbool.h>//FOr bool type
/////////////////////////////////////////////////////
//
//   Function name: checkEvenOdd
//   Input :        Integer
//   OUtput:        boolean 
//   Description :  check whether input is even or odd
//   Author :       Bhosale vishal shridhar
//   Date   :       25/04/2023
//   Update date:   26/04/2023
/////////////////////////////////////////////////////
bool checkedEvenOdd(int iNo)
{
     if ((iNo %2) == 0)
     {
         return true;
     }
     else
     {
          return false;
     }
}
/////////////////////////////////////////////////////
// Entry POint Function 
////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;
 printf("please enter number to check whether it is even or odd:\n");
 scanf("%d",&iValue);
 bRet = checkEvenOdd(iValue);//Function call

 if (bRet == true)
 {
    printf("%d is even number\n",iValue);
 }
 else
 {
    printf("%d is odd number\n",iValue);
  
 }

 return 0;
}