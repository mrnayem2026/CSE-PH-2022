import hashlib

my_email = 'mrnayem4403@gmail.com'
my_pass = '1258najmi'

my_hash = hashlib.md5(my_pass.encode()).hexdigest()

your_email = 'mrnayem4403@gmail.com'
your_pass = 'd60a68810a4d6cbc0470382d4bd9e160'
your_hash = hashlib.md5(your_pass.encode()).hexdigest()
# print(my_hash)
print(your_hash)

# if my_email == your_email and my_hash == your_hash:
#     print("Right")
# else:
#     print("False")