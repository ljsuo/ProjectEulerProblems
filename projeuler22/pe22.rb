#!/usr/bin/env ruby

def find_score(name)
	chars = name[1..-2]
	# "A".ord = 65, "B".ord = 66 ...
	curr_sum = 0
	chars.split('').each { |char| curr_sum += (char.ord - 64)}
	return curr_sum
end


def main()
	total = 0
	counter = 1

	arr = File.read("names.txt").split(",")

	arr.sort!

	arr.each do |name|
		total += (find_score(name) * counter)
		counter += 1
	end
	puts total
end

main()