puts "Contest name?:"
contest_name = gets.chomp
command1 = "mkdir ./#{contest_name} | cd ./#{contest_name}"
system command1
puts "How many questions?:"
num = gets.chomp
arr = ["A","B", "C", "D","E","F"]
for i in 0..num.to_i do
	command2 = "touch #{arr[i]}.cpp"
	system command2
end
command3 = "opat ."
system command3
