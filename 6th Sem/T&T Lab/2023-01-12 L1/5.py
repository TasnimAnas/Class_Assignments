class Student(object):
    name = ""
    roll = 0
    email = ""
    cgpa = 0.0

    def __init__(self, name, roll, email, cgpa):
        self.name = name
        self.roll = roll
        self.email = email
        self.cgpa = cgpa


name = input("Enter name: ")
roll = int(input("Enter roll: "))
email = input("Enter email: ")
cgpa = float(input("Enter CGPA: "))
student = Student(name, roll, email, cgpa)
print("\nStudent details: ")
print("\tName:", student.name)
print("\tRoll:", student.roll)
print("\tEmail:", student.email)
print("\tCGPA:", student.cgpa)
