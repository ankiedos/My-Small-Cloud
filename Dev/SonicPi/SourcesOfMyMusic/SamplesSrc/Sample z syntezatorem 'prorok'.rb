define :doremi do
  play :C, amp: 0.2
  sleep 0.5
  play :D, amp: 0.3
  sleep 0.5
  play :E, amp: 0.4
  sleep 0.5
  play :F, amp: 0.5
  sleep 0.5
  play :G, amp: 0.6
  sleep 0.5
  play :A, amp: 0.5
  sleep 0.5
  play :C, amp: 0.4
  sleep 0.5
  play :D, amp: 0.3
  sleep 0.5
  play :C, amp: 0.2
end
use_synth :prophet
in_thread do
  sleep 2
  play :C, pan: 1
  sleep 0.5
  play :C, pan: -1
  sleep 1
  #2.times do
  loop do
    doremi
  end
end
1.times do
  sleep 3.5
  sleep 2
  play :C, pan: 1
  sleep 0.5
  play :C, pan: -1
  sleep 1
  #2.times do
  loop do
    doremi
  end
end