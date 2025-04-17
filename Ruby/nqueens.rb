N = 8  

def solution(table)
  table.each do |row|
    puts row.map { |cell| cell == 1 ? 'Q' : '.' }.join(' ')
  end
  puts
end

def check_position(table, row, col)
  (0...col).each do |i|
    return false if table[row][i] == 1
  end

  
  i, j = row, col
  while i >= 0 && j >= 0
    return false if table[i][j] == 1
    i -= 1
    j -= 1
  end

  
  i, j = row, col
  while i < N && j >= 0
    return false if table[i][j] == 1
    i += 1
    j -= 1
  end

  true
end
