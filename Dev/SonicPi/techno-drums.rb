live_loop :foo do
  use_synth :pulse
  sample :loop_garzul
  play :F3, release: 8, cutoff: rrand(30, 130), pan: rrand(-1, 1)
  sleep 6
end
live_loop :bar do
  use_synth :tb303
  sample :loop_amen
  play :C4, release: 4, pan: rrand(-1, 1)
  sleep (sample_duration :loop_amen) + 4.5
end