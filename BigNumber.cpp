
//Manmeet Singh
//All the functions declarations of BigNumber.h
#include "BigNumber.h"
#include <iostream>
#include <string>
using namespace std;

//Read big function that is assigned to all variables for bignumber
//works as an initialization for num[];
void BigNumber::readbig()
{
    string big;
    
    int index, number, temp;
    
    cin>>big;
    
    number=big.length()-1;
    
    for(index=0;index<=MAX_DIGITS-1;index++)
        num[index]=0;
    for(index=0;index<=number;index++)
    {
        
        num[index]=big.at(index)-'0';
        
    }
    for(index=0;index<=number/2;index++)
    {
        temp=num[index];
        
        num[index]=num[number-index];
        
        num[number-index]=temp;
    }
}

//Print big function, can only be used if readbig has been called for the variable
void BigNumber::printbig()
{
    int index, counter;
    
    index=MAX_DIGITS-1;
    
    while(num[index]==0 and index>0)
        index--;
    for(counter=index; counter>=0; counter--)
        cout<<num[counter];
}

//add big function. Is called with a variable.addbig and need another variable of the bignumber type.
BigNumber BigNumber::addbig(BigNumber num2)
{
    int index,carry;
    
    BigNumber sum;
    
    for(index=0;index<=MAX_DIGITS-1;index++)
        sum.num[index]=0;
    
    for(index=0;index<=MAX_DIGITS-1;index++)
    {
        sum.num[index]=num[index]+num2.num[index];
    }
    for(index=1;index<=MAX_DIGITS-1;index++)
    {
        carry=sum.num[index-1]/10;
        
        sum.num[index-1]=sum.num[index-1]%10;
        
        sum.num[index]+=carry;
    }
    return sum;
}

