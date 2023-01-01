# Do it all vowel like " a e i o u"

data = "aNtEriOut\n\t>>"

new_data =  data.lower()
not_space = ''

for charcktor in new_data:
    if(charcktor == 'a') or (charcktor == 'e') or (charcktor == 'i') or (charcktor == 'o') or (charcktor == 'u'):
        not_space += charcktor
print(not_space)