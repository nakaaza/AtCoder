# https://atcoder.jp/contests/abs/tasks/abc081_b
n = gets.to_i
seq = gets.chomp.split("\s").map { |e| e.to_i }
count = 0
rems = seq.map { |e| e % 2 }
odd_count = rems.inject(:+)
while odd_count == 0 do
	count += 1
	seq = seq.map { |e| e / 2 }
	rems = seq.map { |e| e % 2 }
	odd_count = rems.inject(:+)
end
p count
