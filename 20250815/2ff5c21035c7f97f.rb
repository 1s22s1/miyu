N = gets.chomp
An = gets.chomp.split(' ').map(&:to_i)

max_it = An.max

puts An.index(max_it)
