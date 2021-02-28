x = gets.chomp
m = gets.chomp.to_i
d = x.split("").map { |e| e.to_i }
d = d.sort.last.to_i + 1
x_tmp = x.to_i(d)
count = 0
while x_tmp <= m do
	count += 1
	d = d.to_i + 1
	x_tmp = x.to_i(d)
end

puts count
