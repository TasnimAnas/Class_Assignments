def find_duplicate_chars(string):
    duplicates = set()
    unique_chars = set()
    for char in string:
        if char in unique_chars:
            duplicates.add(char)
        else:
            unique_chars.add(char)
    print(duplicates)


str = input("Enter the string: ")
find_duplicate_chars(str)
