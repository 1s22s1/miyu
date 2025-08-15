N = gets.chomp.to_i
An = gets.chomp.split(' ').map(&:to_i)

ans = 0

An.each do |a|
  if(a > ans)
    ans = a
  end
end

puts ans
