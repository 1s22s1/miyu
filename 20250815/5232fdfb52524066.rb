N = gets.chomp.to_i
An = gets.chomp.split(' ').map(&:to_i)

An.sort!

puts An[-2]
