#live_loop :haunted do
#  sample :perc_bell, rate: rrand(-1.5, 1.5)
#  sleep rrand(0.1, 2)
#end
live_loop :haunted do
  sample :saw
  puts vt
  sleep 1
end

define :metoda do |a, b|
  [a, b].choose
end