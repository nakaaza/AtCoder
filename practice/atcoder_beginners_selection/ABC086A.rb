# https://atcoder.jp/contests/abs/tasks/abc086_a
a, b = gets.split("\s").map{ |e| e.to_i }
p = a * b
puts (p % 2 == 0) ? "Even" : "Odd"
