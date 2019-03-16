#include <iostream>
using namespace std;

/*=============================================================================
 |     Author:    Moshe Haiem
 |   To Compile:  g++ -o main main.cpp  
 |
 |        Class:  CS16, ucsb-cs16-w19
 |  
 |    Concepts:   uses for loops, do-while loops, switch statements, dynamic vars 
 |                to fill arrays with any size, prompting the user to create IU 
 |                interface 
 +-----------------------------------------------------------------------------
 |
 |  Description:  This program makes the rectangle of any dimension, fills arrays of 
 |                any size.
 |      
 |
 |        Input:  Input dimensions for rectangle, size for array, option for switch menu
 |
 |       Output:  shows user the min and max indexs with values stored, square of 
 |		  whatever dimension they select
 |
 |    Algorithm:  To create rectangle, need to create nested for loops so that the 
 |                height of the rectangle and width are the ones user selected.
 |                For array, create a dynamic array and prompt user to select size of 
 |		  array. make variables of maxindex and max and minindex and min outside
 |		  of for-loops that loop through array to find smallest and largest index
 |		  with their sizes.
 | 		  
 |   Known Bugs:  The only bug I can think of is if inputing a letter, it will create 
 |                an infinite loop.
 |
 *===========================================================================*/

void rectangle(){
  int height;
  cout<<"what height?"<<endl;
  cin>>height;
  while(height<1){
    cout<<"not a valid output, try again"<<endl;
    cin>>height;
    cout<<endl;
  }
  int wid;
  cout<<"what width?"<<endl;
  cin>>wid;
  while(wid<1){
    cout<<"not a valid output, try again"<<endl;
    cin>>wid;
    cout<<endl;
  }

  for(int i=0;i<height;i++){
    for(int i=0;i<wid;i++){
     cout<<"X.";
    }
   cout<<endl;
  }
}

void fill_array(){
  int size;
  cout<<"what size of array?"<<endl;
  cin>>size;
  while(size<=0){
    cout<<"invalid input, try again"<<endl;
    cin>>size;
    cout<<endl;
  }

  int *a=new int[size];
  
  for(int i=0;i<size;i++){
    cout<<"enter value for index "<<i<<endl;
    cin>>a[i];
    cout<<"index "<<i<<" is "<<a[i]<<endl;
  }

  
  int min=a[0];
  int minindex=0;

  for(int i=0;i<size;i++){
    if(a[i]<min){
      min=a[i];
      minindex=i;
    }
  
  }

  cout<<endl;
  cout<<"smallest index is "<<minindex<<" with value "<<min<<endl;


  int max=a[0];
  int maxindex=0;
  for(int i=0;i<size;i++){
    if(a[i]>max){
      max=a[i];
      maxindex=i;
    }
  }
  cout<<"biggest index is "<<maxindex<<" with value "<<max<<endl;
}





int main () {




int x=-1;
do{
cout<<endl;
cout<<"Enter number for option"<<endl;
cout<<"make a rectangle (1)"<<endl;
cout<<"fill an array (2)"<<endl;
cout<<"Quit application (3)"<<endl;
cout<<endl;

cin>>x;

cout<<endl;
 switch(x){
  case 1:
  rectangle();
  cout<<endl;
  cout<<endl;
  break; 
  
  case 2:
  fill_array();
  cout<<endl;
  cout<<endl;
  break;


  default:
  cout<<"try again"<<endl;
  cout<<endl;
 }
}while(x!=3);


    return 0;
}
