import os

timer = 10
password = 'linux'
reboot = 0


while(timer > 0):
    timer = timer - 1
    user = raw_input("Guess the password or else:")
    if timer == 0:
        os.system('shutdown /r')

    elif user == password:
        print "You guessed my password, to bad"
        os.system('shutdown /r')
    
    else:
        continue

