def power_digit(num, exp):
	return num ** exp

def power_digit_sum(num, exp):
	num_str = str(power_digit(num, exp))
	digit_sum = 0
	for digit in num_str:
		digit_sum += int(digit)
	return digit_sum

print(power_digit_sum(2, 1000))