#!/bin/bash    

<<com
Developer: @skywalkerSam
Purpose:   A "Hello-World" program
Stardate:  12022.256.22:05:30
com

# Basically, linux system commands ;) 
clear
echo    #gives a blank line...
whoami
echo
hostname
echo
echo $0
echo
echo $SHELL
echo    
echo "Hello World..."
echo 
pwd
echo
ls
echo
ls -la
echo
ls -ltr
echo

# Basic Input/Output(IO)
name='Starboy'
skills='Computer Systems & Programming'
echo
echo "Name:   $name"
echo
echo "Skills:  $skills"
echo
whoami ; hostname ; ls      #Join multiple commands in one statment...
echo



<<com
Tips;
     >_ Don't forget to give executable permission,  "chmod +x FileName.sh"
     >_ Codes run line by line in order.
     >_ Just "echo" gives a space..
     >_ The scripts for bash shell not gonna run on csh, tcsh, etc...
com
