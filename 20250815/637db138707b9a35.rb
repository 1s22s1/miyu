N = gets.chomp.to_i
An = gets.chomp.split(' ').map(&:to_i)
Sn = gets.chomp.split(' ')

max_it = An.max

puts Sn[An.index(max_it)]
