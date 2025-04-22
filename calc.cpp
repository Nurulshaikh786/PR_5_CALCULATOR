//start
#include<iostream>
using namespace std;
//declare function
float add(float num_1 , float num_2);
float sub(float num_1 , float num_2);
float multy(float num_1 , float num_2);
float divs(float num_1 , float num_2);
float mod(int num_1 , int num_2);

//main function start
int main(){
	
	//declare variabels
    float num_1 , num_2 ;
    int choice;
    
    //while choice is not equal to zero continue the loop
    do{
        cout<<endl<<"*******************************"<<endl;
        cout<<"Press 1 for Addition "<<endl;
        cout<<"Press 2 for Subtraction "<<endl;
        cout<<"Press 3 for Multiplication "<<endl;
        cout<<"Press 4 for Division "<<endl;
        cout<<"Press 5 for Modulous "<<endl;
        cout<<"Press 0 for Exit the program "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        cout<<"***********************************"<<endl;
        
        if(choice>0 && choice<6){
        	cout<<"Enter first number : ";
        cin>>num_1;
        cout<<"Enter second number : ";
        cin>>num_2;
		}
		
		//give switch condition according to your need
        switch(choice){
            case 1 :
            cout<<"Addition of "<<num_1<<" and "<<num_2<<" = "<<add(num_1 , num_2)<<endl;
            break;
            case 2 : 
            cout<<"Subtraction of "<<num_1<<" and "<<num_2<<" = "<<sub(num_1 , num_2)<<endl;
            break;
            case 3 : 
            cout<<"Multiplication of "<<num_1<<" and "<<num_2<<" = "<<multy(num_1 , num_2)<<endl;
            break;
            case 4 : 
            cout<<"Division of "<<num_1<<" and "<<num_2<<" = "<<divs(num_1 , num_2)<<endl;
            break;
            case 5 : 
            cout<<"Modulous of "<<num_1<<" and "<<num_2<<" = "<<mod(num_1 , num_2)<<endl;
            break;
            default : (choice>5)
						?
            				cout<<"Wrong input"
            			: 	cout<<"Program has been stop";
        }
    }while(choice!=0);
    return 0;
}

//define function
float add(float num_1 , float num_2)
{
    return num_1 + num_2;
}
float sub(float num_1 , float num_2)
{
    return num_1 - num_2;
}
float multy(float num_1 , float num_2)
{
    return num_1 * num_2;
}
float divs(float num_1 , float num_2)
{
    return num_1 / num_2;
}
float mod(int num_1 , int num_2)
{
    return num_1 % num_2;
}
//end
