import hashlib

my_name = 'Mostafizur Rahman Nayem'
my_gmail = 'mrnayem@gmail.com'
my_password = '12345678'

my_encrypted_password = hashlib.md5(my_password.encode()).hexdigest()

your_name = 'Mostafizur Rahman Nayem'
your_gmail = 'mrnayem@gmail.com'
your_password ='12345678'
your_encrypted_password = hashlib.md5(your_password.encode()).hexdigest()

if your_name == my_name and your_gmail == my_gmail and your_encrypted_password  == my_encrypted_password:
    print('Your are right user')
else:
    print('Not user founded')

