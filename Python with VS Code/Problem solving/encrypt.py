# Enctypt the following code so that no one can get your strategy

# data = "az"
data = 'ba'
shift =1
output = ''

for charcter in data:
    # print((ord(charcter) + shift-97) % 26  + 97)
    # print((ord(charcter) + shift-97)% 26 +97 )
#     output += chr((ord(charcter) + shift -97)%26 + 97)
# print(output)
#    output +=chr((ord(charcter) - shift -97)%26+97)
    print(ord(charcter) - shift)
# print(output)
