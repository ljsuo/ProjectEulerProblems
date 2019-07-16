

arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

def permute(arr)
	return arr.permutation.to_a
end

def find_mil(arr)
	# Since indexed at 0, take index right before 1 million
	return arr[999999]
end

puts find_mil(permute(arr))