def EmailFunc():
    email = input("enter your email: ")

    if len(email) >= 5 and email.count('@') == 1:
        if email.find('.com') == len(email) - 4:
            print('Valid email!')
        else:
            print('Invalid email!')
    else:
        print("email must contain '@' and should be longer than 5 characters!" )

EmailFunc()