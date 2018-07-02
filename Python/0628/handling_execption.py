while 1:
    try:
        x = int(input("Please inter a number: "))
        break
    except ValueError:
        print("Now a valid number")