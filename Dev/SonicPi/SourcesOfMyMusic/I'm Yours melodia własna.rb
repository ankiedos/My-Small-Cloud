# Welcome to Sonic Pi
#loop do
#  play (chord :E3, :major)
#  sleep 0.5
#  play (chord :F3, :minor)
#  sleep 1
#  play (chord :C, :major), num_octaves: 3
#  sleep 0.5
#end
# C dur ->  G dur -> A mol -> F dur
#chords = (ring (chord :C3, :major), (chord :G3, :major), (chord :A3, :minor), (chord :F3, :major))
live_loop :foo do
  3.times do
    play (chord :C4, :major)
    sleep 0.5
  end
  3.times do
    play (chord :C4, :major)
    sleep 0.25
  end
  3.times do
    play (chord :G4, :major)
    sleep 0.5
  end
  3.times do
    play (chord :G4, :major)
    sleep 0.25
  end
  3.times do
    play (chord :A4, :minor)
    sleep 0.5
  end
  3.times do
    play (chord :A4, :minor)
    sleep 0.25
  end
  3.times do
    play (chord :F, :major)
    sleep 0.5
  end
  3.times do
    play (chord :F, :major)
    sleep 0.25
  end
end