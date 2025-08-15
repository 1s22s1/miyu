N = gets.chomp.to_i
S = gets.chomp

S.each_char do |c|
  case c
  when 'a'..'z'
    puts 'lowercase'
  when 'A'..'Z'
    puts 'uppercase'
  when '0'..'9'
    puts 'digit'
  else
    puts c
  end
end
