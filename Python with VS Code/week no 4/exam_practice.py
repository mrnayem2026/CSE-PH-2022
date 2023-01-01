class Star_cinama:
    hall_list = []
    def entry_hall(Hall,self):
        self.hall_list.append(b)

class Hall:

    def __init__(self,rows,cols,hall_no):
        self.rows = rows
        self.cols = cols
        self.hall_no = hall_no
        self.seats = {}
        self.show_list = []

    def entry_show(self):
        id  = str(input("Enter in no : "))
        movie_name = str(input("Enter movie name : "))
        time = str(input("When movie start"))

        tp = (id,movie_name,time)
        self.show_list.append(tp)

        seats = [["Empty" for i in range (self.cols)] for j in range (self.rows)]

        self.seats = {'id' : id , 'seats': seats}

s  = Star_cinama()
print(s.entry_hall())
b = Hall(5,5,"ABC")

print(b.cols)


    # def book_seats(self):
    #     name = str(input("Enter your name : "))
    #     ph_no = str(input("Enter your phone number : "))
    #     movie_id = str(input("Enter ID No : "))
    #     for i in self.show_list:
    #         if movie_id == i[('id')]:
    #             seat = 




