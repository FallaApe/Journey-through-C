def is_leap(year):
    # Leap year if divisible by 400 or divisible by 4 but not by 100
    return (year % 400 == 0) or (year % 4 == 0 and year % 100 != 0)

year = int(input("enter year: "))
print(is_leap(year))
