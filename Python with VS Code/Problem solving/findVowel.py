# There is your qustion 
#  How to solve this type of problem by python programming language?
# That is qustion ---> "aNtEriOut\n\t>>". Oh! No Just Woiard!
#  Now your first work is this --> "a e i o u"

data = "aNtEriOut\n\t>>"
outPut = ''

chotoHater_char = data.lower()

for okkhor in chotoHater_char:
    if(okkhor == 'a') or (okkhor == 'e') or  (okkhor == 'i') or  (okkhor == 'o') or (okkhor == 'u'):
        # print("found :", okkhor)
        outPut += okkhor + " "

print(outPut)
