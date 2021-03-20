k = gets.to_i
count = 0
for l in 1..k.to_i do
	m_end = k / l
	for m in 1..m_end do
		n_end = k / (l * m)
		for n in 1..n_end do
			count += 1
		end
	end
end
p count
