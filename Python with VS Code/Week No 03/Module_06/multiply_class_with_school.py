class School:
    def __init__(self,name,student,teacher,course):
        self.name = name
        self.student = student
        self.teacher = teacher
        self.course = course

    def get_student(self):
        for std in self.students:
            print(std.name)

class Student:
    def __init__(self,name,roll,age,id):
        self.name = name 
        self.roll = roll
        self.age = age
        self.id = id

class Course:
    def __init__(self,name,teacher):
        self.name = name
        self.teacher = teacher

class Teacher:
    def __init__(self,name,course):
        self.name = name 
        self.course = course


school_name = "Handy Academy"

ds_course1 = Course("Data Stracture","Aqib Zaman")
c_course2 = Course("C++","Rahiduz Zaman")

teacher1 = Teacher("Rafiq","pyton")
teacher2 = Teacher("Bafiq","JavaScript")


student1 = Student("Rahim",50,17,520)
student2 = Student("Safiq",49,18,521)

students = [student1,student2]
courses = [ds_course1 ,c_course2]
teachers = [teacher1,teacher2]

my_school = School(school_name,students,teachers,courses )

# print(my_school.student.get_student())

print(my_school.get_student())