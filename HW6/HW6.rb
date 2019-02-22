
puts "Enter a word: "
word = gets
word = word.gsub(/^[f]/, 'gh')
word = word.gsub(/sh$/, 'ti')
word = word.gsub(/(?!^)i(?!$)/, 'o')
puts word
