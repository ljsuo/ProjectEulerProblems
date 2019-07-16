

# Find proper divisors of number
def factorize(num)
	factors = Array.new
	for i in 1..(num/2) do
		if num % i == 0
			factors.push(i)
		end
	end
	return factors
end

def abundant?(num)
	factors = factorize(num)
	fact_sum = 0
	factors.each { |x| fact_sum += x }
	fact_sum > num
end

def two_abun()
	abs = Array.new
	for i in 1..28123 do
		if abundant?(i)
			abs.push(i)
		end
	end
	ab_sums = Array.new
	for x in abs do
		for y in abs do
			ab_sums.push(x + y)
		end
	end
	non_ab_sum = 0
	for i in 1..28123 do
		unless ab_sums.include? i
			non_ab_sum += i
		end
	end
	return non_ab_sum
end

puts two_abun()