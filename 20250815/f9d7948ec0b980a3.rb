N = gets.chomp
An = gets.chomp.split(' ').map(&:to_i)

max_it = An.max

indexes = An.each_index.select{|i| An[i] == max_it}

indexes.each do |index|
  puts index
end
