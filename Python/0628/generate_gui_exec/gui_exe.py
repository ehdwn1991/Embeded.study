#easygui 예제 p.168
import easygui as e
import sys
e.ynbox("shall I continue ? ", "TItle",("Yes","No"))
e.msgbox("This is a basic message box.", "Title Goes Here")

e.buttonbox("Click on your favorite flavor.","Favorite flavor?",image="sample_img.gif",choices=("Choco","Vanilla","Strawberry"))
msg="Do you want to continue?"
title = "Please Confirm"
if e.ccbox(msg,title):
    pass
else:
    sys.exit(0)
choices=["Vanilla","Chocolate","Strawberry","Rocky Road"]
choice=e.choicebox("What is your favorite Flavor?","Ice Cream Survay",choices)