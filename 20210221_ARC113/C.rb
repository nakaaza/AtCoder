s = gets.chomp
count = 0
pos = 0
while pos < s.length - 3 do
	s_temp = s.dup
	invasion = false
	for num in pos..(s.length - 3) do
		if invasion  && s_temp[num] == s_temp[num + 1] && s_temp[num + 1] == s_temp[num + 2]
			break
		end
		if s_temp[num] == s_temp[num + 1] && s_temp[num + 1] != s_temp[num + 2]
			count += 1
			s_temp[num + 2] = s_temp[num + 1]
			invasion = true
		end
		p num
		p count
		p s_temp
	end
	pos = num
end

puts count
