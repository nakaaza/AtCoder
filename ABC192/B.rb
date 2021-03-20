s = gets.split("")
s.pop
odd = s.each_slice(2).map(&:first)
even = s.each_slice(2).map(&:last)
even.pop if s.length % 2 == 1
if odd == odd.map { |e| e.downcase } && even == even.map { |e| e.upcase }
	puts "Yes"
else
	puts "No"
end
