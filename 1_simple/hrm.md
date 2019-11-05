Mini-Project: Human Resource Management Program
Consider that you want to write a program for the company called XYZ which produces medical instruments. This company is divided into 2 departments: Manufacturing Department (MD) and Human Resource Management department (HRM). You are requested to write a program for HRM department of company XYZ including the maximum number of 100 employees. shows main menu for your program. You are allowed to re-design this menu but with the same functionalities. Note that after each step you should come back to main menu.

Welcome to Human Resource Management (HRM) Software of Company XYZ. To do specific task please choose one of the following commands.

1. Add new employee
2. Delete employee information
3. Update employee information
4. Make reports based on specific field
5. Search employee
6. Quit
   Please enter the related number of your requested command?

You should use class definition Person (See Figure 3.2) and class definition HRM (See Figure 3.3). Note that in class Person, setting the values for all fields is not possible. You have to calculate the value for the field “Salary” after initializing the fields “WorkingHours” and “CostPerHour” by user. For those which the set function works, the validity of the entered data should be checked. For example, negative values for fields “Salary”, ”WorkingHours” and ”CostPerHour” are not accepted. As another example the field “WorkingHours” should be between 1 and 60.

Class Person should include following private fields:
 FirstName (String)
 LastName (String)
 PersonalID (Integer)
 Salary (Double)
 WorkingHours (Double)
 CostPerHour (Double)
Class Person should have public member functions for setting and getting the private fields.
Member functions should have the following naming style:
 set_FieldName()
 get_FieldName()

The field “PersonalID” of class Person should be unique and auto-increment with the initial value of 8921001 for the first employee. It means that user should not enter the value for “personalID”.

Class HRM should include following private fields:
 Array of employees with the type Person (Private)
 The actual amount of staff which is stored in Array of employees(private)
Class HRM should include following public member functions:
 AddPerson()
 DeletePerson(…)
 UpdatePerson(…)
 ReportList(…)
 SearchPerson(…)

Please note that you need to check the actual amount of employees and in case of reaching to the number 100 for the total number of employees you should give proper message. For the actual amount of employees you should not enter the value yourself and your program should calculate automatically the amount while entering or deleting the information of an employee.
Based on the description of the program, you need to define some arguments for functions DeletePerson(…), UpdatePerson(…), ReportList(…), SearchPerson(…) instead of (…).

1. AddPerson()
   This function allows users to enter the related information of employees in class HRM. During the initialization step your program should get the working hours per week (e.g. 35) for the employee and the payment for his/her work per hour. Then, you should calculate the total salary for him/her per year. You should consider 52 working weeks for one year in your calculations. shows the sample output of this function.
   Please enter the first name of an employee? Alex
   Please enter the last name of an employee? Peterson
   How many hours a week is his/her work? 35
   How much per hour is his/her salary? 20
   The employee with the following information has been added to the system:
   First Name Last Name Personal ID Salary per year (Euros)
   ————– ————– ————– —————————
   Alex Peterson 8921001 36400
   Do you want to add another employee (y/n)? n

2. DeletePerson(…)
   This function allows user to delete the staff information. Since the only unique value in the list of employees is “Personal Number”, therefore delete function should be based on this field. Note that in order to enter the correct personal number of employee you need to find his/her personal ID using the function SearchPerson(…).

Please enter the personal number of an employee? 2425374
Sorry, there is not any employee with requested personal number. Do you want to repeat delete by entering the new personal number (y/n)? y
Please enter the personal number of an employee? 8921002
Do you really want to delete employee Michael Jackson (y/n)? y
The employee Michael Jackson has been deleted. Do you want to repeat delete by entering the new personal number (y/n)? n

3. UpdatePerson(…)
   This function allows user to make changes in some fields of staff information. The field “Personal Number” is not allowed to be changed. For example, if user wants to change the number of working hours for specific employee, he should use this function. Since the only unique value in the list of employees is “Personal Number”, therefore update function should be based on this field. You could use the Figure 3.6 as a basic idea for your development. Note that during the update process, if user changes fields “working hours” or “salary of one hour work”, you need to re-calculate yearly salary based on new values and update related fields.

Please enter the personal number of an employee? 2425374
Sorry, there is not the employee with requested personal number. Do you want to repeat update by entering the new personal number (y/n)? y
Please enter the personal number of an employee? 8921001
Please enter the related number of field which you would like to update
(1. First name, 2. Family name, 3. Working hours per week, 4. Payment for one hour)? 4
Please enter new payment for one hour in Euros for Mr. Peterson? 25
Do you want to update any other field (y/n)? n
The information for Mr. Peterson has been updated. Do you want to repeat update by entering the new personal number (y/n)? n

4. ReportList(…)
   In this function, user can choose a specific field to make reporting. These fields can be “Family Name” or “Salary”. You could use Figure 3.7 as a basic for your development. The list will be sorted ascending based on the requested field.

Please enter the related number of the field which you would like to sort the list based on it.
(1. Family name, 2.Salary)? 2
Following is the result:
First Name Family Name Personal Number salary (Euro)
————– —————- ———————- —————-
Alex Peterson 8921001 45500.00
Martin Klein 8921003 81900.00
Sarah Müller 8921004 105300.00
Sabine Schepper 8921005 129386.40
Please enter any key to come back to main menu.

5. SearchPerson(…)
   In this function, user can find specific people using chosen fields. These fields can be “Family Name” or “Salary”. You could use Figure 3.8 as a basic for your development.
   By using salary as a search field, user should define minimum and maximum values for search. As a result he/she will get the list of employees who their salary is between requested Min_Salary and Max_salary. For searching the employee with specific amount of salary, user should define same Min_Salary and Max_Salary values.
   By using the “Family Name” as a search field user will get the list of employees who their family name is equal to requested family name.

Search is based on two different fields (1.family name, 2.Salary), please enter your choice? 2

Please define your search range for salary of employees (S_min, S_max).
What is minimum salary for search (S_min)? 60000
What is maximum salary for search (S_max)? 110000
Following is the list of employees for your defined search fields:
First Name Family Name Personal Number salary (Euro)
————– —————- ———————- —————-
Martin Klein 8921003 81900.00
Sarah Müller 8921004 105300.00
Do you want to do new search (y/n)? y
Search is based on two different fields (1.family name, 2.Salary), please enter your choice? 1
Please enter the family name of employee? Peterson
Following is the list of employees for your defined search fields:
First Name Family Name Personal Number salary (Euro)
————– —————- ———————- —————-
Alex Peterson 8921001 45500.00
Do you want to do new search (y/n)? n
