a, b, c = gets.split("\s").map { |e| e.to_i }

a_rem = a % 10
b_rem = b % 4 + 4
c_rem = c % 4 + 4
puts (a_rem ** b_rem ** c_rem) % 10
