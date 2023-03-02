import random
import string


def generate_password():

    upper = string.ascii_uppercase
    lower = string.ascii_lowercase
    digits = string.digits
    symbols = string.punctuation
    upper_chars = random.sample(upper, 3)
    lower_chars = random.sample(lower, 3)
    digit_chars = random.sample(digits, 3)
    symbol_chars = random.sample(symbols, 3)
    all_chars = upper_chars + lower_chars + digit_chars + symbol_chars
    random.shuffle(all_chars)
    password = ''.join(all_chars)
    return password


password = generate_password()
print(password)
