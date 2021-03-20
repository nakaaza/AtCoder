a, b = gets.chomp.split("\s").map { |e| e.to_i }
puts 100 * (1 - b/a.to_f)
# puts sprintf("%10.20f", 1 - b/a.to_f)  #=> "  10.00000"
