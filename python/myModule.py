def Func():

    mssg = input("enter a number: ")
    try:
        mssg = int(mssg) + 4
        return mssg
        
    except ValueError:
        print("This is not a number")
        return None

