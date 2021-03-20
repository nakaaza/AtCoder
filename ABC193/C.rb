n = gets.chomp.to_i
count = n
for i in 1..n do
	root = Math.sqrt(i)
	if (root - root.floor == 0)
		count -= 1
		next
	end
	cbrt = Math.cbrt(i)
	if (cbrt - cbrt.floor == 0)
		count -= 1
		next
	end
	qdrt = Math.sqrt(root).ceil
	for k in 2..qdrt do
		val = Math.log(i, k)
		if (val - val.floor == 0) && val.floor >= 2
			count -= 1
			break
		end
	end
end
puts count
