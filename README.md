<h1>Heading simple addition by two functions</h1>

A simple addition is represented in ESROCOS by two functions.
Function "manager" creates 2 random numbers and passes them to the function "addition".
The "addition" function sums them and returns the result. 
The language of the functions is written in C.

<h2>Installation</h2>

Download this folder and drag them into the esrocos_workspace folder.
Go into the esrocos_workspace folder and call: <em>source env.sh</em>
Go into the project folder and call: <em>esrocos_fetch_dependencies</em>
Execute ./run.py to see the addition.
press Crtl+C to end the program. 

<h2>other details</h2>

To look into the project call: <em>esrocos_edit_project</em>
The source code of the functions is stored in the folders "manager" and "addition"
The project can also be built again: <em>esrocos_built_project</em>
