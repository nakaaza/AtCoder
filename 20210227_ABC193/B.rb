n = gets.chomp.to_i
prices = []
for i in 1..n do
	a, p, x = gets.chomp.split("\s").map { |e| e.to_i }
	prices << p if a < x
end

puts (prices.length == 0) ? -1 : prices.min
