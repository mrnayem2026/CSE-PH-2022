a = {
    "Name" : "Mostafizur Rahman Nayem",
    "University" : "Islamic Arabic University",
    "Branch" : "Al-Quran"
}


# up = a["Branch"] = "All-hadid",
# # print(up)

b = {
    "hometown" : "Barishal",
    "District" : "Barishl",
    "Village" : "Dotterabad"
}

a.update(b)
a["previwesMad"] = "Sarsina"

# del a["Village"]
# a.clear()
# del a
# oneItemAcces = a["Branch"]
# print(oneItemAcces)
print(a)
lis =  a.items()
print(lis)


