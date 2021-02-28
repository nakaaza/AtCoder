a, k = gets.split("\s")
for num in 1..k.to_i do
	a = a.to_s.split("").map { |e| e.to_i }
	arr_g1 = a.sort.reverse
	arr_g2 = a.sort
	g1 = arr_g1.map { |e| e.to_s }.inject(:+).to_i
	g2 = arr_g2.map { |e| e.to_s }.inject(:+).to_i
	a = g1 - g2
end
puts a
