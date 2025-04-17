N = 8  

def solution(table)
  table.each do |row|
    puts row.map { |cell| cell == 1 ? 'Q' : '.' }.join(' ')
  end
  puts
end
