// an array structure of student information
#include<cmath>
#include<cstdlib>
#include<cstring>
#include <iostream>
using namespace std;

struct student
{
             
    string name;     // student name, max 49 characters
    string familyname; // student famila name
   
    int  Matriculationnr;                 // student Matriculation number
    
};

int main()
{
    
    // declaring array of 10 element of structure type
    // and some of the element also are arrays
    struct student stud[10];
    struct student familyname;
    struct student name;
    //-------defining variables and initializing them------------- 
    int i = 0,n,j,k,temp2=0,temp4,temp5;
    string t,temp,temp1;
     bool doMore;
   stud[i].Matriculationnr=0;
   //--------Printing my name on screen----------------  
    cout<<"            Welcome to the  program 2.2 written by Your Name"<<endl;
    cout<<"********************************************************************************"<<endl;
    cout<<endl<<endl<<endl;
    //----receiving the variables from input--------------  
    cout<<"Enter student data\n";
     cout<<"Please enter number of student=";
      while(!(cin>>n))  //Reciving vaiables from input : is it no/character ?
      {
      cout << "Please  enter a number!  Try again: ";
      cin.clear ();   
      cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                  // whichever comes first.
      }
   // cin>>n ;
    cout<<endl<<endl;
   
    for(i=0; i<n; i++)
    {
         // storing the data
     
         cout<<"First name       :";
         getline(cin,stud[i].name);
         
         cin>>stud[i].name;
         cout<<"Familyname       : ";
          getline(cin,stud[i].familyname);
         
         cin>>stud[i].familyname;
       
         cout<<"Matriculationnr  : ";
         while(!(cin>>stud[i].Matriculationnr))  //Reciving vaiables from input : is it no/character ?
      {
      cout << "Please  enter a number!  Try again: ";
      cin.clear ();   
      cin.ignore (1000, '\n');  // Skip to next newline or 1000 chars,
                                  // whichever comes first.
      }
        // cin>>stud[i].Matriculationnr;
         cout<<endl;
}

    cout<<"\n--------------Display the data--------------------\n";
    cout<<"       Sorted list based on Family Name\n";
   
    cout<<"-----------------------------------------------------\n";
   
  
  
  do {
        doMore = false;  // assume this is last pass over array
        for (int i=0; i<n-1; i++) {
            if (stud[i].familyname> stud[i+1].familyname) {
                // exchange elements
              temp = stud[i].familyname;stud[i].familyname = stud[i+1].familyname; stud[i+1].familyname = temp;
              temp1 = stud[i].name;stud[i].name = stud[i+1].name; stud[i+1].name = temp1;
              temp2 = stud[i].Matriculationnr ;stud[i].Matriculationnr = stud[i+1].Matriculationnr ; stud[i+1].Matriculationnr  = temp2;
              
                doMore = true;  // after exchange, must look again
            }
        }
    } while (doMore);

        for (int j=0;j<n;j++)
        {
            cout<<j<<" :";
         cout<<"First name :"<<stud[j].name<< "           ";
             
           cout<<"Familyname : "<< stud[j].familyname<< "           ";
          
           cout<<"Matriculationnr : "<<stud[j].Matriculationnr<< "           ";
            cout<<endl;
            
        }
        
        
        
 
    
    cout<<"\n-------------------------Display the data---------------------------\n";
    cout<<"Final result after students with the same Matriculation Number deleated\n";
    cout<<"------------------------------------------------------------------------\n";
 for (int i = 0; i < n; i++)
 {
  bool matching = false;
  for (int j = 0; (j < i) && (matching == false); j++)
        if (stud[i].Matriculationnr == stud[j].Matriculationnr)
         matching = true;
  if (!matching){
                       cout<<i<<" :";
           cout<<"First name :"<<stud[i].name<<"           ";
             
           cout<<"Familyname  : "<< stud[i].familyname<<"           ";
            
           cout<<"Matriculationnr : "<<stud[i].Matriculationnr<<"           " ;
            
             cout<<endl;
                     }
 } 
   


   system("pause");
   cin.get();
   return 0; 
}