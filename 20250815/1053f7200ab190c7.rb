N, M = gets.chomp.split(' ').map(&:to_i)
arr = []

N.times do |i|
  a, b = gets.chomp.split(' ').map(&:to_i)
  arr << [a, b]
end

puts arr.select{|e| e[1] <= M}.sort.reverse[0][0]
