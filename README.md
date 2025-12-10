# Pratham-Kumar-sosc-2
Terminal Based Knowledge Vaults

Simple C Notes

This is a simple command-line application written in C to manage employee details. It allows you to create, view, search, edit, and delete employee records.
How to Compile and Run

To compile and run this program, you need to have a C compiler like GCC installed on your system.
Compilation

Open a terminal or command prompt and execute the following command to compile the code:
text

gcc main.c -o main  (To compile the Programm)


After successful compilation, an executable file named main will be created. To run the program, use the following command:
text

./main

Example Usage
Here are a couple of examples of how to use the program.
Example 1: Add and View Employees
1.	Run the program.
2.	Choose option 1 to create a new employee data.
3.	Enter the employee's name and working post when prompted.
4.	Choose option 2 to view all the employee details you have entered.
   
Example 2: Search and Delete an Employee

1.	Run the program and add a few employee records.
2.	Choose option 3 to search for a specific employee by name.
3.	Enter the name of the employee you want to find.
4.	The program will display the matching employee details.
5.	Choose option 5 to delete an employee record.
6.	Enter the ID of the employee you want to delete
  
  
11.	The examples below show what a full interaction might look like when the code is working as intended.
12.	________________________________________
13.	Example 
18.	============================================
19.	 Simple C Notes to maintain employee Details
20.	============================================
21.	1. Create Employee Data
22.	2. View All Employee Details
23.	3. Search Employee details
24.	4. Edit Employee Data
25.	5. Delete Employee details
26.	6. Exit
27.	Enter choice: 1
28.	
29.	 [1] CREATE Employee Details
30.	Name: Pratham
31.	Working Post(single line): Software Developer
32.	        Data 1 created.
33.	
34.	============================================
35.	 Simple C Notes to maintain employee Details
36.	============================================
37.	1. Create Employee Data
38.	2. View All Employee Details
39.	3. Search Employee details
40.	4. Edit Employee Data
41.	5. Delete Employee details
42.	6. Exit
43.	Enter choice: 1
44.	
45.	 [1] CREATE Employee Details
46.	Name: Dhanvith
47.	Working Post(single line): Technician
48.	        Data 2 created.
49.	
50.	============================================
51.	 Simple C Notes to maintain employee Details
52.	============================================
53.	1. Create Employee Data
54.	2. View All Employee Details
55.	3. Search Employee details
56.	4. Edit Employee Data
57.	5. Delete Employee details
58.	6. Exit
59.	Enter choice: 2
60.	
61.	[2] VIEW ALL DATA (2 Total)
62.	Employee ID: 1 | Employee Name: Pratham
63.	Working Post: Software Developer
64.	Employee ID: 2 | Employee Name: Dhanvith
65.	Working Post: Technician
66.	This shows creating two employees and then using option 2 to display all stored records.
67.	
71.	
72.	============================================
73.	 Simple C Notes to maintain employee Details
74.	============================================
75.	1. Create Employee Data
76.	2. View All Employee Details
77.	3. Search Employee details
78.	4. Edit Employee Data
79.	5. Delete Employee details
80.	6. Exit
81.	Enter choice: 3
82.	
83.	[3] SEARCH EMPLOYEE DATA
84.	Enter Employee name to search: Pratham
85.	Results for 'Pratham'
86.	Employee ID: 1 | Employee Name: Pratham
87.	Working Post: Software Developer
88.	
89.	Enter choice: 4
90.	
91.	[4] EDIT EMPLOYEE DATA
92.	Enter Employee ID to edit: 1
93.	Editing Data 1 (Current Employee Name: Pratham)
94.	New Name(or press Enter to skip): Panish
95.	        Data 1 updated.
96.	
97.	Enter choice: 5
98.	
99.	[5] DELETE EMPLOYEE DATA
100.	Enter Employee ID to delete: 2
101.	        Employee Data of ID 2 deleted.
102.	
103.	Enter choice: 2
104.	
105.	[2] VIEW ALL DATA (1 Total)
106.	Employee ID: 1 | Employee Name: Panish
107.	Working Post: Software Developer

