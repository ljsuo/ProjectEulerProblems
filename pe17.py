import inflect

p = inflect.engine()

def num_let_count(roof):
	total_sum = 0;
	for num in range(1, roof + 1):
		num_eng = p.number_to_words(num)
		num_eng = num_eng.replace('-', '').replace(' ', '')
		total_sum += len(num_eng)

	return total_sum

print(num_let_count(1000))