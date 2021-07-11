with_fx :reverb do
  with_fx :echo do
    live_loop :foo do
      use_synth:tb303
      play scale(:E3, :minor_pentatonic), pan: rrand(-1, 1)
      sleep 1
      play scale(:F3, :minor_pentatonic), pan: rrand(-1, 1)
      sleep 0.5
      play scale(:G3, :major_pentatonic), pan: rrand(-1, 1)
    end
    live_loop :bar do
      use_synth :pulse # Można też zmienić na prophet (m.in. cichsze)
      play scale(:E3, :minor_pentatonic), pan: rrand(-1, 1)
      sleep 1
      play scale(:F3, :minor_pentatonic), pan: rrand(-1, 1)
      sleep 0.5
      play scale(:G3, :major_pentatonic), pan: rrand(-1, 1)
    end
  end
end