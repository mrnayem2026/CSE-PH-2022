class User:
    def __init__(self,user_name,user_password):
        self.user_name = user_name
        self.user_password = user_password


class Bus:
    def __init__(self,bus_no,driver,arrival,departure,from_to,to):
        self.bus_no = bus_no
        self.driver = driver
        self.arrival = arrival
        self.departure = departure
        self.from_to = from_to
        self.to = to
        self.seat_no = ['Empty' for i in range(20)]


class MRN_Company:
    total_bus =  5
    bus_list = []

    def bus_set_in_streat(self):
        bus_no = int(input("Enter your bus no : "))
        flag = 1
        for w in self.bus_list:
            if bus_no == w['bus_no']:
                print("Bus allredy set in streat")
                flag = 0
                break            
        if flag:
            driver = input("Driver name : ")
            arrival = input("Bus kokhon asbe : ")
            departure = input("Bus kokhon sarbe : ")
            from_to = input("Kotha tke carbe : ")
            to = input("Kotha jabe : ")
            self.new_bus_embed = Bus(bus_no,driver,arrival , departure,from_to,to)
            self.bus_list.append(vars(self.new_bus_embed))


class Counter(MRN_Company):

    user_list = []

    def create_account(self):
        passenger = input("Enter your name : ")
        password = input("Enter your password : ")
        self.new_account = User(passenger,password )
        self.user_list.append(vars(self.new_account))
        print()
        print(f'{"<="*10} {"=>"*10}')
        print('\t Account create sucessfully')
        print(f'{"<="*10} {"=>"*10}')


    def get_user_info(self):
        return self.user_list

    def reservation(self):
        bus_no = int(input("Enter your bus no : "))
        for i in self.bus_list:
            if bus_no == i['bus__no']:
                passenger = input("Enter your name : ")
                seat_no = input("Enter your  seat no : ") # seat_no a int() hobe 

                if seat_no>20:
                    print('Available set is 20')
                elif seat_no<20:
                    print('Available set is 20')
                elif i['seat_no'][seat_no-1] != "Empty":
                    print('Set is alredy booking')
                else:
                    i['seat_no'][seat_no-1] = passenger   
            else:
                return "No bus avilable" #print() hobe 

    def show_bus(self):

        bus_no = int(input("Enter your bus no : "))
        for i in self.bus_list:
            if bus_no == i['bus_no']:
                print()
                print(f'{"<"*15} {">"*15}')
                print()
                print(f'{" "*15 } BUS INFORMATION {" "*15 }')
                print()
                print(f'{"<>"*15} {"<>"*15}')
                print()
                print(f'Bus no : {bus_no} \t\t Driver name : {i["driver"]}')
                print(f'Arivale : {i["arrival"]} \t\t Departure : {i["departure"]}')
                print(f'From to : {i["from_to"]} \t\t To : {i["to"]}')
                print()
                print(f'{"<>"*15} {"<>"*15}')
                a = 1
                for x in range(5):
                    for y in range(2):
                        print(f'{a}..{i["seat_no"][a-1]} ',end="\t")
                        a+=1
                    for y in range(2):
                        print(f'{a}..{i["seat_no"][a-1]} ',end="\t")
                        a+=1

            else:
                print()
                print(f'{" "*10} {"-- "*10} {" "*10}')
                print('No bus avilable')
                print()
                print(f'{" "*10} {"-- "*10} {" "*10}')
        

    def available(self):
        if len(self.bus_list) == 0:
            print("No bus avilable")
        else:
             for i in self.bus_list:
                print()
                print(f'{"<"*15} {">"*15}')
                print()
                print(f'{" "*15 } BUS INFORMATION {" "*15 }')
                print()
                print(f'{"<>"*15} {"<>"*15}')
                print()
                print(f'Bus no : {i["bus_no"]} \t\t Driver name : {i["driver"]}')
                print(f'Arivale : {i["arrival"]} \t\t Departure : {i["departure"]}')
                print(f'From to : {i["from_to"]} \t\t To : {i["to"]}')
                print()
                print(f'{"<>"*15} {"<>"*15}')
                a = 1
                for x in range(5):
                    for y in range(2):
                        print(f'{a}..{i["seat_no"][a-1]}',end="\t")
                        a+=1
                    for y in range(2):
                        print(f'{a}..{i["seat_no"][a-1]}',end="\t")
                        a+=1
                       
while True:
    # company = MRN_Company()
    b = Counter()
    print("1. Create account.\n2. Login account.\n3. EXIT")
    user_input = int(input("Enter you choice : "))
    if user_input == 3:
        break
    elif user_input == 1:
        b.create_account()
    elif user_input == 2:
        user_name = input("Enter your name : ")
        user_password = input("Enter your password : ")

        isAdmin = False
        flag = 0
        if user_name =="admin" and user_password == "123":
            isAdmin = True
        if isAdmin == False:
            for w in b.get_user_info():
                if  w['user_name'] == user_name and w['user_password'] == user_password:
                    flag = 1
                    break

            if flag:
                while True:
                    print()
                    print(f'{"<"*15} {">"*15}')
                    print()
                    print(f'{" "*15 } Welcome to BUS TICKET BOOKING SYSTEM {" "*15 }')
                    print()
                    print(f'{"<>"*15} {"<>"*15}') 
                    print("1.Reservation \n 2. Show bus information \n 3. Avaiable Bus \n 4.EXIT")
                    passenger_inp = int(input("Enter your chouse : "))
                    if passenger_inp == 4:
                        break
                    elif passenger_inp == 1:
                        b.reservation()
                    elif passenger_inp == 2:
                        b.show_bus()
                    elif passenger_inp  == 3:
                        b.available()
            else:
                print()
                print(f'{"<>"*15} {"<>"*15}') 
                print("No user founded")
                print(f'{"<>"*15} {"<>"*15}') 
        else:
            while True:
                    print()
                    print(f'{"<"*15} {">"*15}')
                    print()
                    print(f'{" "*15 } HELLO ADMIN Welcome to BUS TICKET BOOKING SYSTEM {" "*15 }')
                    print()
                    print(f'{"<>"*15} {"<>"*15}') 
                    print( "1. Install Bus\n2. Available Buses\n3. Show Bus Info\n4. EXIT")
                    admin_inp = int(input("Enter your chouse : "))
                    if admin_inp == 4:
                        break
                    elif admin_inp == 1:
                        b.bus_set_in_streat()
                    elif admin_inp == 2:
                        b.available()
                    elif admin_inp  == 3:
                        b.show_bus()
            

          



    

