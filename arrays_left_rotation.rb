#!/bin/ruby

n,k = gets.strip.split(' ')
n = n.to_i
k = k.to_i
a = gets.strip
a = a.split(' ').map(&:to_i)
a2 = Array.new

for i in 0 ... n
  if (i+k)<n
      a2.push(a[i+k])
  else
      a2.push(a[i+k-n])
  end
end


aa = a2.join(' ')
puts aa
