<h1>Simple addition by two functions</h1>

A simple addition is represented in ESROCOS by two functions.
Function "manager" creates 2 random numbers and passes them to the function "addition".
The "addition" function sums them and returns the result. 
The language of the functions is written in C.

<h2>Installation</h2>

Download this folder and drag them into the esrocos_workspace folder.</br>
Go into the esrocos_workspace folder and call: <em>source env.sh</em></br>
Go into the project folder and call: <em>esrocos_fetch_dependencies</em></br>
Execute ./run.py to see the addition.</br>
press Crtl+C to end the program. 

<h2>Other details</h2>

To look into the project call: <em>esrocos_edit_project</em></br>
The source code of the functions is stored in the folders "manager" and "addition"</br>
The project can also be built again: <em>esrocos_built_project</em>
