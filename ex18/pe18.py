def make_triangle():
	triangle = []

	with open("ex18.txt", "r") as f:
		for line in f:
			row = []
			for token in line.split():
				row.append(int(token))
			triangle.append(row)
	return triangle

def next_max(ult, penult, index):
	next_path = max(ult[index] + penult[index], ult[index + 1] + penult[index])
	return next_path

def path_end(penult):
	if len(penult) == 1:
		return True
	return False

def max_path(triangle):
	path = 0
	while True:
		ult = triangle[len(triangle) - 1]
		penult = triangle[len(triangle) - 2]
		new_row = []
		for num in range(0, len(penult)):
			new_row.append(next_max(ult, penult, num))

		triangle.pop(len(triangle) - 1)
		triangle.pop(len(triangle) - 1)
		triangle.append(new_row)

		if path_end(penult):
			path = triangle[0][0]
			break

	return path

def main():
	print(max_path(make_triangle()))

if __name__ == '__main__':
	main()